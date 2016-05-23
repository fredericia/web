<?php
/**
 * @file
 * fredericia_frontpage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function fredericia_frontpage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'fredericia_frontpage';
  $page->task = 'page';
  $page->admin_title = 'Fredericia frontpage';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_fredericia_frontpage__panel';
  $handler->task = 'page';
  $handler->subtask = 'fredericia_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'full-width-dark-light-dark';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'light_section_1' => NULL,
      'dark_section_1' => NULL,
      'dark_section_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '019c4b75-4668-41d2-b536-935e3563f967';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-59730443-a8fe-40e2-98aa-8c8c91a2ee9e';
    $pane->panel = 'dark_section_1';
    $pane->type = 'views_panes';
    $pane->subtype = 'fredericia_forntpage_spots-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '59730443-a8fe-40e2-98aa-8c8c91a2ee9e';
    $display->content['new-59730443-a8fe-40e2-98aa-8c8c91a2ee9e'] = $pane;
    $display->panels['dark_section_1'][0] = 'new-59730443-a8fe-40e2-98aa-8c8c91a2ee9e';
    $pane = new stdClass();
    $pane->pid = 'new-9a744075-80c8-4086-a177-6e3882621bf3';
    $pane->panel = 'dark_section_2';
    $pane->type = 'views_panes';
    $pane->subtype = 'fredericia_forntpage_spots-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9a744075-80c8-4086-a177-6e3882621bf3';
    $display->content['new-9a744075-80c8-4086-a177-6e3882621bf3'] = $pane;
    $display->panels['dark_section_2'][0] = 'new-9a744075-80c8-4086-a177-6e3882621bf3';
    $pane = new stdClass();
    $pane->pid = 'new-614b1bad-1f48-4c92-90b6-2e17a4805f68';
    $pane->panel = 'light_section_1';
    $pane->type = 'views_panes';
    $pane->subtype = 'fredericia_forntpage_news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '614b1bad-1f48-4c92-90b6-2e17a4805f68';
    $display->content['new-614b1bad-1f48-4c92-90b6-2e17a4805f68'] = $pane;
    $display->panels['light_section_1'][0] = 'new-614b1bad-1f48-4c92-90b6-2e17a4805f68';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['fredericia_frontpage'] = $page;

  return $pages;

}
