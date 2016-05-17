<?php
/**
 * @file
 * fredericia_frontpage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fredericia_frontpage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fredericia_forntpage_spots';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fredericia Forntpage Spots';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'spotbox';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'fredericia_frontpage_spots_botto' => 'fredericia_frontpage_spots_botto',
    'fredericia_frontpage_spots_top' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_spotbox_box' => 'os2web_spotbox_box',
  );

  /* Display: Top spots */
  $handler = $view->new_display('panel_pane', 'Top spots', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'fredericia_frontpage_spots_top' => 'fredericia_frontpage_spots_top',
    'fredericia_frontpage_spots_botto' => 0,
  );

  /* Display: Bottom spots */
  $handler = $view->new_display('panel_pane', 'Bottom spots', 'panel_pane_2');
  $translatables['fredericia_forntpage_spots'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('queue'),
    t('Top spots'),
    t('View panes'),
    t('Bottom spots'),
  );
  $export['fredericia_forntpage_spots'] = $view;

  $view = new view();
  $view->name = 'fredericia_spotbokse';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fredericia Indholdsadmin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Spotbokse';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Stort billede */
  $handler->display->display_options['fields']['field_os2web_spotbox_big_image']['id'] = 'field_os2web_spotbox_big_image';
  $handler->display->display_options['fields']['field_os2web_spotbox_big_image']['table'] = 'field_data_field_os2web_spotbox_big_image';
  $handler->display->display_options['fields']['field_os2web_spotbox_big_image']['field'] = 'field_os2web_spotbox_big_image';
  $handler->display->display_options['fields']['field_os2web_spotbox_big_image']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_spotbox_big_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_spotbox_big_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_os2web_spotbox_big_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Spotbox Links visning */
  $handler->display->display_options['fields']['field_os2web_spotbox_display']['id'] = 'field_os2web_spotbox_display';
  $handler->display->display_options['fields']['field_os2web_spotbox_display']['table'] = 'field_data_field_os2web_spotbox_display';
  $handler->display->display_options['fields']['field_os2web_spotbox_display']['field'] = 'field_os2web_spotbox_display';
  $handler->display->display_options['fields']['field_os2web_spotbox_display']['label'] = 'Vis som link';
  /* Field: Nodequeue: Add/remove links */
  $handler->display->display_options['fields']['nodequeue_links']['id'] = 'nodequeue_links';
  $handler->display->display_options['fields']['nodequeue_links']['table'] = 'node';
  $handler->display->display_options['fields']['nodequeue_links']['field'] = 'nodequeue_links';
  $handler->display->display_options['fields']['nodequeue_links']['label'] = '';
  $handler->display->display_options['fields']['nodequeue_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nodequeue_links']['text'] = 'Forside';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_os2web_spotbox_url']['id'] = 'field_os2web_spotbox_url';
  $handler->display->display_options['fields']['field_os2web_spotbox_url']['table'] = 'field_data_field_os2web_spotbox_url';
  $handler->display->display_options['fields']['field_os2web_spotbox_url']['field'] = 'field_os2web_spotbox_url';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Udgivet';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_spotbox_box' => 'os2web_spotbox_box',
  );

  /* Display: Spotbokse */
  $handler = $view->new_display('page', 'Spotbokse', 'page');
  $handler->display->display_options['path'] = 'admin/content/spotbox';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Spotbox';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Kontaktblokke */
  $handler = $view->new_display('page', 'Kontaktblokke', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Overskrift på kontaktblok */
  $handler->display->display_options['fields']['field_os2web_contact_field_dept']['id'] = 'field_os2web_contact_field_dept';
  $handler->display->display_options['fields']['field_os2web_contact_field_dept']['table'] = 'field_data_field_os2web_contact_field_dept';
  $handler->display->display_options['fields']['field_os2web_contact_field_dept']['field'] = 'field_os2web_contact_field_dept';
  $handler->display->display_options['fields']['field_os2web_contact_field_dept']['label'] = 'Overskrift';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Udgivet';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_contact_contact' => 'os2web_contact_contact',
  );
  $handler->display->display_options['path'] = 'admin/content/kontaktbokse';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Kontaktblokke';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Nyheder */
  $handler = $view->new_display('page', 'Nyheder', 'page_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Forfrem til */
  $handler->display->display_options['fields']['field_os2web_base_field_promote']['id'] = 'field_os2web_base_field_promote';
  $handler->display->display_options['fields']['field_os2web_base_field_promote']['table'] = 'field_data_field_os2web_base_field_promote';
  $handler->display->display_options['fields']['field_os2web_base_field_promote']['field'] = 'field_os2web_base_field_promote';
  $handler->display->display_options['fields']['field_os2web_base_field_promote']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_promote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_promote']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_os2web_base_field_promote']['delta_offset'] = '0';
  /* Field: Content: Arkiveringsdato */
  $handler->display->display_options['fields']['field_os2web_news_page_archive']['id'] = 'field_os2web_news_page_archive';
  $handler->display->display_options['fields']['field_os2web_news_page_archive']['table'] = 'field_data_field_os2web_news_page_archive';
  $handler->display->display_options['fields']['field_os2web_news_page_archive']['field'] = 'field_os2web_news_page_archive';
  $handler->display->display_options['fields']['field_os2web_news_page_archive']['settings'] = array(
    'format_type' => 'os2web_base_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Nyhedstype */
  $handler->display->display_options['fields']['field_os2web_news_page_type']['id'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['field'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Portalkategori */
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['id'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['field'] = 'field_os2web_base_field_struct';
  /* Field: Content: Primære billede */
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['id'] = 'field_os2web_base_field_lead_img';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['table'] = 'field_data_field_os2web_base_field_lead_img';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['field'] = 'field_os2web_base_field_lead_img';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['label'] = 'Billede';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['delta_offset'] = '0';
  /* Field: Content: Slut tidspunkt */
  $handler->display->display_options['fields']['field_os2web_news_date_end']['id'] = 'field_os2web_news_date_end';
  $handler->display->display_options['fields']['field_os2web_news_date_end']['table'] = 'field_data_field_os2web_news_date_end';
  $handler->display->display_options['fields']['field_os2web_news_date_end']['field'] = 'field_os2web_news_date_end';
  $handler->display->display_options['fields']['field_os2web_news_date_end']['settings'] = array(
    'format_type' => 'os2web_base_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Start tidspunkt */
  $handler->display->display_options['fields']['field_os2web_news_date_start']['id'] = 'field_os2web_news_date_start';
  $handler->display->display_options['fields']['field_os2web_news_date_start']['table'] = 'field_data_field_os2web_news_date_start';
  $handler->display->display_options['fields']['field_os2web_news_date_start']['field'] = 'field_os2web_news_date_start';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Oprettelsesdato';
  $handler->display->display_options['fields']['created']['date_format'] = 'os2web_base_date_only';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'os2web_base_date_only';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Udgivet';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_base_news' => 'os2web_base_news',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/nyheder';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Nyheder';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['fredericia_spotbokse'] = array(
    t('Master'),
    t('Spotbokse'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('Vis som link'),
    t('Forside'),
    t('URL'),
    t('Udgivet'),
    t('Kontaktblokke'),
    t('Overskrift'),
    t('Nyheder'),
    t('Arkiveringsdato'),
    t('Nyhedstype'),
    t('Portalkategori'),
    t('Billede'),
    t('Slut tidspunkt'),
    t('Start tidspunkt'),
    t('Oprettelsesdato'),
    t('Titel'),
  );
  $export['fredericia_spotbokse'] = $view;

  return $export;
}
