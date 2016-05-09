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
    $pane->pid = 'new-a889170d-ed87-46d7-90a4-8d12e935469d';
    $pane->panel = 'dark_section_1';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_news_lists-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '3',
      'offset' => '0',
      'arguments' => array(
        'field_os2web_news_page_type_tid' => '',
        'field_os2web_news_page_type_tid_1' => '',
        'term_node_tid_depth' => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
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
    $pane->uuid = 'a889170d-ed87-46d7-90a4-8d12e935469d';
    $display->content['new-a889170d-ed87-46d7-90a4-8d12e935469d'] = $pane;
    $display->panels['dark_section_1'][0] = 'new-a889170d-ed87-46d7-90a4-8d12e935469d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['fredericia_frontpage'] = $page;

  return $pages;

}
