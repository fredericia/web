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
    $pane->pid = 'new-6c9542de-d688-4dc9-9450-d075aae89fe4';
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
    $pane->uuid = '6c9542de-d688-4dc9-9450-d075aae89fe4';
    $display->content['new-6c9542de-d688-4dc9-9450-d075aae89fe4'] = $pane;
    $display->panels['dark_section_1'][0] = 'new-6c9542de-d688-4dc9-9450-d075aae89fe4';
    $pane = new stdClass();
    $pane->pid = 'new-f7737894-a1fa-4219-8679-53344c92172a';
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
    $pane->uuid = 'f7737894-a1fa-4219-8679-53344c92172a';
    $display->content['new-f7737894-a1fa-4219-8679-53344c92172a'] = $pane;
    $display->panels['dark_section_2'][0] = 'new-f7737894-a1fa-4219-8679-53344c92172a';
    $pane = new stdClass();
    $pane->pid = 'new-b15d4922-8b3d-459d-b87b-694171060fef';
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
    $pane->uuid = 'b15d4922-8b3d-459d-b87b-694171060fef';
    $display->content['new-b15d4922-8b3d-459d-b87b-694171060fef'] = $pane;
    $display->panels['light_section_1'][0] = 'new-b15d4922-8b3d-459d-b87b-694171060fef';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['fredericia_frontpage'] = $page;

  return $pages;

}
