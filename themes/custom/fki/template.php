<?php
function fki_file_link($variables) {
  $file = $variables['file'];
  $icon_directory = $variables['icon_directory'];

  $url = file_create_url($file->uri);
  $icon = theme('file_icon', array('file' => $file, 'icon_directory' => $icon_directory));

  // Set options as per anchor format described at
  // http://microformats.org/wiki/file-format-examples
  $options = array(
    'attributes' => array(
      'type' => $file->filemime . '; length=' . $file->filesize,
    ),
  );

  // Use the description as the link text if available.
  if (empty($file->description)) {
    $link_text = $file->filename;
  }
  else {
    $link_text = $file->description;
    $options['attributes']['title'] = check_plain($file->filename);
  }

  //open files of particular mime types in new window
  $new_window_mimetypes = array('application/pdf','text/plain');
  if (in_array($file->filemime, $new_window_mimetypes)) {
    $options['attributes']['target'] = '_blank';
  }

  return '<span class="file">' . $icon . ' ' . l($link_text, $url, $options) . '</span>';
}

/**
 * Implements theme_preprocess_html().
 */
function fki_preprocess_html(&$variables) {
  $theme_path = path_to_theme();

  // Add conditional stylesheets
  drupal_add_css($theme_path . '/dist/css/stylesheet.css', array(
    'type' => 'file',
    'group' => CSS_THEME,
  ));
  drupal_add_js($theme_path . '/dist/js/modernizr.js', array(
    'type' => 'file',
    'scope' => 'footer',
    'group' => JS_LIBRARY,
  ));
  drupal_add_js($theme_path . '/dist/js/app.js', array(
    'type' => 'file',
    'scope' => 'footer',
  ));
  drupal_add_js($theme_path . '/dist/js/ie9.js', array(
    'type' => 'file',
    'scope' => 'footer',
    'browsers' => array('IE' => 'lte IE 9', '!IE' => FALSE),
  ));

  drupal_add_js(drupal_get_path('module', 'os2web_borger_dk') . '/js/os2web_borger_dk.js', array(
    'type' => 'file',
    'scope' => 'footer',
  ));

  // Add out fonts from Google Fonts API.
  drupal_add_html_head(array(
    '#tag' => 'link',
    '#attributes' => array(
      'href' => 'https://fonts.googleapis.com/css?family=Open+Sans:400,400i,700,700i',
      'rel' => 'stylesheet',
      'type' => 'text/css',
    ),
  ), 'google_font_fki');

  // Footer
  if (theme_get_setting('footer_attached')) {
    $variables['classes_array'][] = 'footer-attached';
  }

  // Body classes
  $variables['classes_array'][] = 'simple-navigation-enabled-xs';
  $variables['classes_array'][] = 'simple-navigation-enabled-sm';
  $variables['classes_array'][] = 'simple-navigation-sticky';

  $variables['classes_array'][] = 'main-navigation-enabled-md';
  $variables['classes_array'][] = 'main-navigation-enabled-lg';

  // Load jQuery UI
  drupal_add_library('system', 'ui');
}

/*
 * Implements hook_js_alter().
 */
function fki_js_alter(&$javascript) {
  unset($javascript['profiles/os2web/modules/custom/os2web_borger_dk/js/os2web_borger_dk.js']);
}

/*
 * Implements hook_css_alter().
 */
function fki_css_alter(&$css) {
  unset($css[drupal_get_path('module', 'feedback') . '/feedback.css']);
}

/*
 * Implements theme_preprocess_page().
 */
function fki_preprocess_page(&$variables) {
  $current_theme = variable_get('theme_default','none');
  $primary_navigation_name = variable_get('menu_main_links_source', 'main-menu');
  $secondary_navigation_name = variable_get('menu_secondary_links_source', 'user-menu');

  // Wrap panels layout.
  $variables['wrap_panels_layout'] = FALSE;

  $exclude_layouts_from_wrapping = array(
    'full-width-dark-light-dark',
    'full-width-light-dark-light',
    'full-width-dark-light-dark-with-right-sidebar-8-4',
    'full-width-dark-light-dark-with-right-sidebar-9-3',
  );
  if (!empty($variables['panels']->layout)
    && !in_array($variables['panels']->layout, $exclude_layouts_from_wrapping)) {
    $variables['wrap_panels_layout'] = TRUE;
  }

  // Navigation
  $variables['sidebar_tertiary'] = _bellcom_generate_menu('main-menu', 'sidebar', 2);

  // Tabs.
  $variables['tabs_primary'] = $variables['tabs'];
  $variables['tabs_secondary'] = $variables['tabs'];
  unset($variables['tabs_primary']['#secondary']);
  unset($variables['tabs_secondary']['#primary']);

  // Search form.
  $page_header_search = module_invoke('search_api_page', 'block_view', '2');
  $variables['page_header_search'] = $page_header_search['content'];

  // Tabbed navigation
  $variables['tabbed_navigation'] = _bellcom_generate_menu($primary_navigation_name, 'tabbed', 1);

  // Find node of type "beredskabsmeddelelse"
  $tids = array(5226);

  $query = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'os2web_base_news')
    ->propertyCondition('status', 1)
    ->fieldCondition('field_os2web_news_page_type', 'tid', $tids)
    ->range(0, 1)
    ->execute();

  if (!empty($result['node'])) {
    $nids = array_keys($result['node']);

    if ($node = node_load($nids[0])) {
      $variables['emergency_grant'] = node_view($node, 'includeable');
    }
  }
}

/**
 * Implements template_preprocess_node.
 */
function fki_preprocess_node(&$variables) {
  $node = $variables['node'];

  // Optionally, run node-type-specific preprocess functions, like
  // foo_preprocess_node_page() or foo_preprocess_node_story().
  $function_node_type = __FUNCTION__ . '__' . $node->type;
  $function_view_mode = __FUNCTION__ . '__' . $variables['view_mode'];
  if (function_exists($function_node_type)) {
    $function_node_type($variables);
  }
  if (function_exists($function_view_mode)) {
    $function_view_mode($variables);
  }
}

/*
 * Implements template_preprocess_comment().
 */
function fki_preprocess_comment(&$variables) {

  // Author
  if ($author_information = bellcom_user_get_raw_information($variables['comment']->uid)) {

    if (isset($author_information['full_name'])) {
      $variables['author_full_name'] = $author_information['full_name'];
    }
  }
}

/*
 * Implements template_node_view_alter().
 */
function fki_node_view_alter(&$build) {
}

/*
 * Full node
 * Implements hook_preprocess_node().
 */
function fki_preprocess_node__full(&$variables) {
  // Make "node--NODETYPE--VIEWMODE.tpl.php" templates available for nodes
  // Next line doesn't work but generate notices.
  /* $variables['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode']; */
  $variables['display_case'] = false;

  // Should case be displayed?
  if ($case_target = field_get_items('node', $variables['node'], 'field_os2web_base_case_ref')) {

    if ($node_case = node_load($case_target[0]['target_id'])) {

      if (!empty($node_case->field_os2web_cp_service_doc_ref)) {
        $variables['display_case'] = true;
      }
    }
  }
}

/*
 * Implements hook_preprocess_node().
 */
function fki_preprocess_node__os2web_spotbox_box(&$variables) {

  // Teaser
  if ($variables['view_mode'] == 'teaser') {
    $variables['spotbox_link'] = array();

    // Link
    if ($field_url = field_get_items('node', $variables['node'], 'field_os2web_spotbox_url')) {
      $variables['spotbox_link']['url'] = $field_url[0]['value'];
    }
    if ($field_text = field_get_items('node', $variables['node'], 'field_os2web_spotbox_text')) {
      $variables['spotbox_link']['title'] = $field_text[0]['value'];
    }

    // Image
    if ($field_image = field_get_items('node', $variables['node'], 'field_spotbox_image')) {
      if (!empty($field_image)) {
        $variables['classes_array'][] = 'os2-spotbox-' . $variables['elements']['#view_mode'] . '-variant-with-image';
      }
    }
  }

  // Spotbox
  if ($variables['view_mode'] == 'spotbox') {
    $variables['spotbox_link'] = array();

    // Link
    if ($field_url = field_get_items('node', $variables['node'], 'field_os2web_spotbox_url')) {
      $variables['spotbox_link']['url'] = $field_url[0]['value'];
    }
    if ($field_text = field_get_items('node', $variables['node'], 'field_os2web_spotbox_text')) {
      $variables['spotbox_link']['title'] = $field_text[0]['value'];
    }

    // Display control
    if ($field_link_display = field_get_items('node', $variables['node'], 'field_os2web_spotbox_display')) {

      // Show without links
      if ($field_link_display[0]['value'] == '0') {
        $variables['spotbox_with_link'] = FALSE;
        $variables['classes_array'][] = 'os2-node-spotbox-' . $variables['elements']['#view_mode'] . '-variant-without-links';

        // Background image (image path only)
        if ($field_image = field_get_items('node', $variables['node'], 'field_os2web_spotbox_big_image')) {

          // Load the file object
          $background_image = image_style_url('spotbox_spotbox_background', $field_image[0]['uri']);

          // Apply background image as attribute
          $variables['attributes_array'] = array('style' => 'background-image: url(' . $background_image . ')');
        }
      }

      // Show with links
      else {
        $variables['spotbox_with_link'] = TRUE;
        $variables['classes_array'][] = 'os2-node-spotbox-' . $variables['elements']['#view_mode'] . '-variant-with-links';

        // "More" link
        if ($field_url = field_get_items('node', $variables['node'], 'field_os2web_spotbox_url')) {

          // Add more link
          $variables['field_os2web_base_field_ext_link'][] = array(
            'url' => $field_url[0]['value'],
            'display_url' => $field_url[0]['value'],
            'title' => t('More'),
            'html' => TRUE,
          );
        }
      }
    }
  }
}

/*
 * Implements hook_preprocess_node().
 */
function fki_preprocess_node__os2web_base_news(&$variables) {

  // Spotbox
  if ($variables['view_mode'] == 'spotbox') {

    // Background image (image path only)
    if ($field_image = field_get_items('node', $variables['node'], 'field_os2web_base_field_lead_img')) {

      // Load the file object
      $file = file_load($field_image[0]['fid']);

      // Get a web accessible URL for the image
      $variables['news_background_image'] = file_create_url($file->uri);
    }
  }
  if ($variables['view_mode'] == 'full') {
    $variables['turn_on_off_button'] = true;
  }
}

/*
 * Implements hook_preprocess_node().
 */
function fki_preprocess_node__os2web_cp_service_cp_document(&$variables) {

  // List
  if ($variables['view_mode'] == 'list') {

    // File ID
    if ($field_file_id = field_get_items('node', $variables['node'], 'field_os2web_cp_service_file_id')) {

      // Get a web accessible URL for the image
      $variables['document_url'] = $field_file_id[0]['value'];
    }

    // File type
    if ($field_file_type = field_get_items('node', $variables['node'], 'field_os2web_cp_service_filetype')) {

      // Get a web accessible URL for the image
      $variables['document_type'] = strtolower($field_file_type[0]['value']);
    }
  }
}

/*
 * Implements hook_preprocess_node().
 */
function fki_preprocess_node__borger_dk_article(&$variables) {
  if ($variables['view_mode'] == 'teaser') {
    $borger_dk_article_ref = field_get_items('node', $variables['node'],'field_borger_dk_article_ref');
    if (isset($borger_dk_article_ref)  && is_array($borger_dk_article_ref) && isset($borger_dk_article_ref[0]['borgerdk_article_entity_id'])){
      $wrapper = entity_load('borgerdk_article', array($borger_dk_article_ref[0]['borgerdk_article_entity_id']));
      $variables['borgerdk_article_info'] = array_pop($wrapper)->header;
    }
  }
}
/*
 * Implements hook_preprocess_node().
 */
function fki_preprocess_node__os2web_base_contentpage(&$variables) {

  // File ID
  if ($field_file_id = field_get_items('node', $variables['node'], 'field_os2web_cp_service_file_id')) {

    // Get a web accessible URL for the image
    $variables['document_url'] = $field_file_id[0]['value'];
  }
  if ($variables['view_mode'] == 'full') {
    $variables['turn_on_off_button'] = true;
  }
}

/*
 * Implements template_preprocess_taxonomy_term().
 */
function fki_preprocess_taxonomy_term(&$variables) {
  $term = $variables['term'];

  // Add taxonomy-term--view_mode.tpl.php suggestions.
  $variables['theme_hook_suggestions'][] = 'taxonomy_term__' . $variables['view_mode'];

  // Make "taxonomy-term--TERMTYPE--VIEWMODE.tpl.php" templates available for terms.
  $variables['theme_hook_suggestions'][] = 'taxonomy_term__' . $variables['vocabulary_machine_name'] . '__' . $variables['view_mode'];

  // Add a class for the view mode.
  $variables['classes_array'][] = 'view-mode-' . $variables['view_mode'];

  // Optionally, run node-type-specific preprocess functions, like
  // foo_preprocess_taxonomy_term_page() or foo_preprocess_taxonomy_term_story().
  $function_taxonomy_term_type = __FUNCTION__ . '__' . $variables['vocabulary_machine_name'];
  $function_view_mode = __FUNCTION__ . '__' . $variables['view_mode'];
  if (function_exists($function_taxonomy_term_type)) {
    $function_taxonomy_term_type($variables);
  }
  if (function_exists($function_view_mode)) {
    $function_view_mode($variables);
  }
}

/*
 * Implements template_preprocess_taxonomy_term().
 */
function fki_preprocess_taxonomy_term__teaser(&$variables) {

  // Structure
  if ($variables['vocabulary_machine_name'] == 'os2web_base_tax_site_structure') {

    if ($children = taxonomy_get_children($variables['tid'], $variables['vid'])) {
    }
  }
}

/*
 * Implements hook_form_alter().
 */
function fki_form_alter(&$form, &$form_state, $form_id) {

  switch ($form_id)  {

    // Search block form
    case 'search_block_form':
      break;

    // Search API block form
    case 'search_api_page_search_form_soegning':
      $form['submit_2']['#value'] = '';
      $form['submit_2']['#attributes']['title'][] = t('Søg');

      break;

    // User login
    case 'user_login':
      break;

    // User registration
    case 'user_register_form':
      break;

    // Measurement
    case 'measurement_node_form':
      break;
  }
}

/*
 * Implements template_preprocess_field().
 */
function fki_preprocess_field(&$variables, $hook) {
  $element = $variables['element'];

  if (isset($element['#field_name'])) {

    if ($element['#field_name'] == 'field_profile_image') {
      $variables['classes_array'][] = 'os2-profile-image';

      // Default
      if ($image_style = $element[0]['#image_style']) {

        // Default
        if ($image_style == 'profile_image_default') {
          $variables['classes_array'][] = 'os2-profile-image-default';
        }

        // Mini
        if ($image_style == 'profile_image_mini') {
          $variables['classes_array'][] = 'os2-profile-image-mini';
        }

        // Small
        if ($image_style == 'profile_image_small') {
          $variables['classes_array'][] = 'os2-profile-image-small';
        }

        // Large
        if ($image_style == 'profile_image_large') {
          $variables['classes_array'][] = 'os2-profile-image-large';
        }
      }
    }
  }
}

/*
 * Implements theme_menu_tree().
 */
function fki_menu_tree(&$variables) {
  if($variables['theme_hook_original'] != 'menu_tree') {
    return $variables['tree'];
  }

  return '<ul class="menu nav">' . $variables['tree'] . '</ul>';
}

/*
 * Implements theme_menu_tree().
 */
function fki_menu_tree__tabbed(&$variables) {
  return $variables['tree'];
}

/*
 * Implements theme_menu_link().
 */
function fki_menu_link__tabbed(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {

    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }

    elseif ((!empty($element['#original_link']['depth']))) {

      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);

      // Submenu classes
      $sub_menu_attributes['element']['class'] = array();
      $sub_menu_attributes['element']['class'][] = 'sidebar-navigation-dropdown-menu';
      if (in_array('active', $element['#attributes']['class']) or in_array('active-trail', $element['#attributes']['class'])) {
        $sub_menu_attributes['element']['class'][] = 'active';
      }

      $sub_menu = ' <ul' . drupal_attributes($sub_menu_attributes['element']) . '>' . drupal_render($element['#below']) . '</ul>';

      // Generate as dropdown.
      $element['#title'] .= ' <span class="sidebar-navigation-dropdown-toggle"></span>';
      $element['#attributes']['class'][] = 'sidebar-navigation-dropdown';
      $element['#localized_options']['html'] = TRUE;
    }
  }
  else {
    $element['#attributes']['class'][] = 'sidebar-navigation-link';
  }

  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }

  // Link title class
  $convert_characters = array('/', '_', 'æ', 'ø', 'å');
  $element['#attributes']['class'][] = str_replace('/', '-', $element['#href']);

  $output = l($element['#title'], $element['#href'], $element['#localized_options']);

  return '<div class="col-xs-4 col-xs-small-gutter"><div class="os2-page-header-tabbed-menu-link">' . $output . $sub_menu . "</div></div>\n";
}

/*
 * Implements hook_preprocess_breadcrumb().
 */
function fki_preprocess_breadcrumb(&$variables) {
  $variables['breadcrumb'][0] = l('<span class="icon"></span>', '<front>', array('html' => true));
}

/**
 * Returns HTML for an image with an appropriate icon for the given file.
 *
 * @param $variables
 *   An associative array containing:
 *   - file: A file object for which to make an icon.
 *   - icon_directory: (optional) A path to a directory of icons to be used for
 *     files. Defaults to the value of the "file_icon_directory" variable.
 *   - alt: (optional) The alternative text to represent the icon in text-based
 *     browsers. Defaults to an empty string.
 *
 * @ingroup themeable
 */
function fki_file_icon($variables) {
  $file = $variables['file'];
  $icon_directory = $variables['icon_directory'];

  $mime = check_plain($file->filemime);
  $icon_url = file_icon_url($file, $icon_directory);
  // Human-readable names, for use as text-alternatives to icons.
  $mime_name = array(
    'application/msword' => t('Microsoft Office document icon'),
    'application/vnd.ms-excel' => t('Office spreadsheet icon'),
    'application/vnd.ms-powerpoint' => t('Office presentation icon'),
    'application/pdf' => t('PDF icon'),
    'video/quicktime' => t('Movie icon'),
    'audio/mpeg' => t('Audio icon'),
    'audio/wav' => t('Audio icon'),
    'image/jpeg' => t('Image icon'),
    'image/png' => t('Image icon'),
    'image/gif' => t('Image icon'),
    'application/zip' => t('Package icon'),
    'text/html' => t('HTML icon'),
    'text/plain' => t('Plain text icon'),
    'application/octet-stream' => t('Binary Data'),
  );
  $alt = ($variables['alt'] == "") ? $mime_name[$mime] : $variables['alt'];
  return '<img class="file-icon" alt="' . check_plain($alt) . '" title="' . $mime . '" src="' . $icon_url . '" />';
}
