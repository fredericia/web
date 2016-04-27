<?php
/**
 * @file
 * fredericia.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function fredericia_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_283ff35c-83db-4105-9b8a-0f3c4cb6ef79';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Node standard',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'full-width-dark-light-dark-with-right-sidebar-8-4';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
      'dark_section_1' => NULL,
      'light_section_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ece4379e-4bc0-43a3-9e39-59944aeb9668';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cd6daa4f-2f2a-4cbe-88c6-c5746bf01857';
    $pane->panel = 'content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cd6daa4f-2f2a-4cbe-88c6-c5746bf01857';
    $display->content['new-cd6daa4f-2f2a-4cbe-88c6-c5746bf01857'] = $pane;
    $display->panels['content'][0] = 'new-cd6daa4f-2f2a-4cbe-88c6-c5746bf01857';
    $pane = new stdClass();
    $pane->pid = 'new-22d36b55-435f-46e2-8b9d-e96e6e27c9ca';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'workbench-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '22d36b55-435f-46e2-8b9d-e96e6e27c9ca';
    $display->content['new-22d36b55-435f-46e2-8b9d-e96e6e27c9ca'] = $pane;
    $display->panels['content'][1] = 'new-22d36b55-435f-46e2-8b9d-e96e6e27c9ca';
    $pane = new stdClass();
    $pane->pid = 'new-c9820da6-e5fd-4577-a373-e183e1396f3a';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'os2intra_related_links-related_links_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Relaterede sider',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c9820da6-e5fd-4577-a373-e183e1396f3a';
    $display->content['new-c9820da6-e5fd-4577-a373-e183e1396f3a'] = $pane;
    $display->panels['sidebar'][0] = 'new-c9820da6-e5fd-4577-a373-e183e1396f3a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cd6daa4f-2f2a-4cbe-88c6-c5746bf01857';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_283ff35c-83db-4105-9b8a-0f3c4cb6ef79'] = $handler;

  return $export;
}
