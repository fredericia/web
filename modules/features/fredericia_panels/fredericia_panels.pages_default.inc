<?php
/**
 * @file
 * fredericia_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function fredericia_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_283ff35c-83db-4105-9b8a-0f3c4cb6ef79';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
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
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'full-width-dark-light-dark-with-right-sidebar-8-4';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'bottom' => NULL,
      'dark_section_1' => NULL,
      'light_section_1' => NULL,
      'light_section_0' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ece4379e-4bc0-43a3-9e39-59944aeb9668';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_283ff35c-83db-4105-9b8a-0f3c4cb6ef79';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3e502072-bf7b-4e95-a09f-8999ec9ee694';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_base_field_lead_img';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'slideshow',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'slideshow_image_style' => 'fredericia_content_image',
      'slideshow_link' => '',
      'slideshow_caption' => '',
      'slideshow_caption_link' => '',
      'slideshow_fx' => 'fade',
      'slideshow_speed' => '1000',
      'slideshow_timeout' => '4000',
      'slideshow_order' => '',
      'slideshow_controls' => 0,
      'slideshow_controls_pause' => 0,
      'slideshow_controls_position' => 'after',
      'slideshow_pause' => 0,
      'slideshow_start_on_hover' => 0,
      'slideshow_pager' => '',
      'slideshow_pager_position' => 'after',
      'slideshow_pager_image_style' => '',
      'slideshow_carousel_image_style' => '',
      'slideshow_carousel_visible' => '3',
      'slideshow_carousel_scroll' => '1',
      'slideshow_carousel_speed' => '500',
      'slideshow_carousel_vertical' => 0,
      'slideshow_carousel_circular' => 0,
      'slideshow_carousel_follow' => 0,
      'slideshow_carousel_skin' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'os2-full-width-image',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3e502072-bf7b-4e95-a09f-8999ec9ee694';
  $display->content['new-3e502072-bf7b-4e95-a09f-8999ec9ee694'] = $pane;
  $display->panels['content'][0] = 'new-3e502072-bf7b-4e95-a09f-8999ec9ee694';
  $pane = new stdClass();
  $pane->pid = 'new-e4254450-0654-4504-be85-74a97ef88d3c';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_base_field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'slideshow',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'slideshow_image_style' => 'fredericia_content_image',
      'slideshow_link' => '',
      'slideshow_caption' => '',
      'slideshow_caption_link' => '',
      'slideshow_fx' => 'fade',
      'slideshow_speed' => '1000',
      'slideshow_timeout' => '4000',
      'slideshow_order' => '',
      'slideshow_controls' => 0,
      'slideshow_controls_pause' => 0,
      'slideshow_controls_position' => 'after',
      'slideshow_pause' => 0,
      'slideshow_start_on_hover' => 0,
      'slideshow_pager' => '',
      'slideshow_pager_position' => 'after',
      'slideshow_pager_image_style' => '',
      'slideshow_carousel_image_style' => 'fredericia_content_image',
      'slideshow_carousel_visible' => '3',
      'slideshow_carousel_scroll' => '1',
      'slideshow_carousel_speed' => '500',
      'slideshow_carousel_vertical' => 0,
      'slideshow_carousel_circular' => 0,
      'slideshow_carousel_follow' => 0,
      'slideshow_carousel_skin' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'os2-full-width-image',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e4254450-0654-4504-be85-74a97ef88d3c';
  $display->content['new-e4254450-0654-4504-be85-74a97ef88d3c'] = $pane;
  $display->panels['content'][1] = 'new-e4254450-0654-4504-be85-74a97ef88d3c';
  $pane = new stdClass();
  $pane->pid = 'new-483e6901-e978-4121-b2eb-1021e302eabd';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'os2web_related_links-selfservice_links_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Selvbetjening',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'os2-box-quaternary',
    'template_suggestion' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '483e6901-e978-4121-b2eb-1021e302eabd';
  $display->content['new-483e6901-e978-4121-b2eb-1021e302eabd'] = $pane;
  $display->panels['content'][2] = 'new-483e6901-e978-4121-b2eb-1021e302eabd';
  $pane = new stdClass();
  $pane->pid = 'new-cd6daa4f-2f2a-4cbe-88c6-c5746bf01857';
  $pane->panel = 'content';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 1,
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'cd6daa4f-2f2a-4cbe-88c6-c5746bf01857';
  $display->content['new-cd6daa4f-2f2a-4cbe-88c6-c5746bf01857'] = $pane;
  $display->panels['content'][3] = 'new-cd6daa4f-2f2a-4cbe-88c6-c5746bf01857';
  $pane = new stdClass();
  $pane->pid = 'new-2dc0d6a6-49ef-48fa-8b31-ac48706078f5';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_base_case_ref';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'list',
      'links' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2dc0d6a6-49ef-48fa-8b31-ac48706078f5';
  $display->content['new-2dc0d6a6-49ef-48fa-8b31-ac48706078f5'] = $pane;
  $display->panels['content'][4] = 'new-2dc0d6a6-49ef-48fa-8b31-ac48706078f5';
  $pane = new stdClass();
  $pane->pid = 'new-138acf26-a8a2-42a8-81d5-4d738f186eaf';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_paragraphs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'edit' => '',
      'delete' => 'Slet',
      'add' => '',
      'description' => 0,
      'view_mode' => 'full',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '138acf26-a8a2-42a8-81d5-4d738f186eaf';
  $display->content['new-138acf26-a8a2-42a8-81d5-4d738f186eaf'] = $pane;
  $display->panels['content'][5] = 'new-138acf26-a8a2-42a8-81d5-4d738f186eaf';
  $pane = new stdClass();
  $pane->pid = 'new-6e2166c5-f87d-4812-98c3-3a1c3124f39e';
  $pane->panel = 'light_section_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_node_display-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
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
  $pane->uuid = '6e2166c5-f87d-4812-98c3-3a1c3124f39e';
  $display->content['new-6e2166c5-f87d-4812-98c3-3a1c3124f39e'] = $pane;
  $display->panels['light_section_1'][0] = 'new-6e2166c5-f87d-4812-98c3-3a1c3124f39e';
  $pane = new stdClass();
  $pane->pid = 'new-fea81816-bdc2-4b62-a447-cbde22b8ed5e';
  $pane->panel = 'light_section_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_editor_information-panel_pane_1';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fea81816-bdc2-4b62-a447-cbde22b8ed5e';
  $display->content['new-fea81816-bdc2-4b62-a447-cbde22b8ed5e'] = $pane;
  $display->panels['light_section_1'][1] = 'new-fea81816-bdc2-4b62-a447-cbde22b8ed5e';
  $pane = new stdClass();
  $pane->pid = 'new-8f333b97-11df-4328-a747-11eb1359c147';
  $pane->panel = 'sidebar';
  $pane->type = 'menu_tree';
  $pane->subtype = '_active';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:os2web_base_contentpage:field_os2web_base_hide_sidebar',
        'settings' => array(
          'field_os2web_base_hide_sidebar' => array(
            'und' => array(
              0 => array(
                'value' => 0,
              ),
            ),
          ),
          'field_os2web_base_hide_sidebar_value' => array(
            0 => 0,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'parent' => '_active:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 'child',
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => '_active',
    'parent_mlid' => '0',
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
    'css_class' => 'os2-links-list',
    'template_suggestion' => 'menu_tree',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8f333b97-11df-4328-a747-11eb1359c147';
  $display->content['new-8f333b97-11df-4328-a747-11eb1359c147'] = $pane;
  $display->panels['sidebar'][0] = 'new-8f333b97-11df-4328-a747-11eb1359c147';
  $pane = new stdClass();
  $pane->pid = 'new-81282eec-9ae4-46f7-9ed2-4ca9162090a0';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'os2web_related_links-node_related_links_block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:os2web_base_contentpage:field_os2web_base_hide_sidebar',
        'settings' => array(
          'field_os2web_base_hide_sidebar' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_os2web_base_hide_sidebar_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Læs også',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'os2-links-list',
    'template_suggestion' => 'block',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '81282eec-9ae4-46f7-9ed2-4ca9162090a0';
  $display->content['new-81282eec-9ae4-46f7-9ed2-4ca9162090a0'] = $pane;
  $display->panels['sidebar'][1] = 'new-81282eec-9ae4-46f7-9ed2-4ca9162090a0';
  $pane = new stdClass();
  $pane->pid = 'new-dfcb7571-f0c4-4e15-a16f-c50abb67082a';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'os2web_contact-os2web_contact';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:os2web_base_contentpage:field_os2web_base_hide_sidebar',
        'settings' => array(
          'field_os2web_base_hide_sidebar' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_os2web_base_hide_sidebar_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => TRUE,
      ),
      1 => array(
        'name' => 'entity_field_value:node:os2web_base_contentpage:field_os2web_base_hide_contact',
        'settings' => array(
          'field_os2web_base_hide_contact' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_os2web_base_hide_contact_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => TRUE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Kontaktinformation',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dfcb7571-f0c4-4e15-a16f-c50abb67082a';
  $display->content['new-dfcb7571-f0c4-4e15-a16f-c50abb67082a'] = $pane;
  $display->panels['sidebar'][2] = 'new-dfcb7571-f0c4-4e15-a16f-c50abb67082a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cd6daa4f-2f2a-4cbe-88c6-c5746bf01857';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_283ff35c-83db-4105-9b8a-0f3c4cb6ef79'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_da3a9973-a938-4d22-a9e0-2eadc5fa10f1';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Sitestruktur',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'term_parent',
          'settings' => array(
            'vid' => '11',
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Centreret',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8d932897-19d8-4e34-9bcd-27dce6ee5da5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_da3a9973-a938-4d22-a9e0-2eadc5fa10f1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e4313f4c-8cbe-4e77-9e40-f5a2b7daad0f';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'os2web_related_links-term_selfservice_links_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Selvbetjening',
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
  $pane->uuid = 'e4313f4c-8cbe-4e77-9e40-f5a2b7daad0f';
  $display->content['new-e4313f4c-8cbe-4e77-9e40-f5a2b7daad0f'] = $pane;
  $display->panels['center'][0] = 'new-e4313f4c-8cbe-4e77-9e40-f5a2b7daad0f';
  $pane = new stdClass();
  $pane->pid = 'new-c15d4088-32fb-43cd-813a-cdfde76865a9';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Selvbetjeningslinks',
    'title' => '',
    'body' => 'Dropdown m Selvbetjeningslinks',
    'format' => 'plain_text',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c15d4088-32fb-43cd-813a-cdfde76865a9';
  $display->content['new-c15d4088-32fb-43cd-813a-cdfde76865a9'] = $pane;
  $display->panels['center'][1] = 'new-c15d4088-32fb-43cd-813a-cdfde76865a9';
  $pane = new stdClass();
  $pane->pid = 'new-38a2a67c-a764-466b-8095-52b4ec622caf';
  $pane->panel = 'center';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'taxonomy_term:description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_term_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '38a2a67c-a764-466b-8095-52b4ec622caf';
  $display->content['new-38a2a67c-a764-466b-8095-52b4ec622caf'] = $pane;
  $display->panels['center'][2] = 'new-38a2a67c-a764-466b-8095-52b4ec622caf';
  $pane = new stdClass();
  $pane->pid = 'new-ca75c5f3-2cee-4804-8b31-9906ade7da76';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_termtekst';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ca75c5f3-2cee-4804-8b31-9906ade7da76';
  $display->content['new-ca75c5f3-2cee-4804-8b31-9906ade7da76'] = $pane;
  $display->panels['center'][3] = 'new-ca75c5f3-2cee-4804-8b31-9906ade7da76';
  $pane = new stdClass();
  $pane->pid = 'new-02fefd4a-1110-46a9-8628-153475ed93d8';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_term_subterms-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '02fefd4a-1110-46a9-8628-153475ed93d8';
  $display->content['new-02fefd4a-1110-46a9-8628-153475ed93d8'] = $pane;
  $display->panels['center'][4] = 'new-02fefd4a-1110-46a9-8628-153475ed93d8';
  $pane = new stdClass();
  $pane->pid = 'new-90ced79a-9c0b-46a5-8028-62a54de8b3ad';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_term_news-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '3',
    'offset' => '0',
    'exposed' => array(
      'field_os2web_base_field_promote_tid' => '5220',
    ),
    'context' => array(
      0 => 'argument_term_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '90ced79a-9c0b-46a5-8028-62a54de8b3ad';
  $display->content['new-90ced79a-9c0b-46a5-8028-62a54de8b3ad'] = $pane;
  $display->panels['center'][5] = 'new-90ced79a-9c0b-46a5-8028-62a54de8b3ad';
  $pane = new stdClass();
  $pane->pid = 'new-dc27c3a6-bdf8-4776-b125-c20d886ef733';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_os2web_base_field_spotbox';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_node',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'spotbox',
    ),
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'dc27c3a6-bdf8-4776-b125-c20d886ef733';
  $display->content['new-dc27c3a6-bdf8-4776-b125-c20d886ef733'] = $pane;
  $display->panels['center'][6] = 'new-dc27c3a6-bdf8-4776-b125-c20d886ef733';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-38a2a67c-a764-466b-8095-52b4ec622caf';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_da3a9973-a938-4d22-a9e0-2eadc5fa10f1'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__sitestruktur-niveau-1';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -3;
  $handler->conf = array(
    'title' => 'Sitestruktur niveau 1',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'sitestruktur-niveau-1',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'name' => 'entity_bundle:taxonomy_term',
          'settings' => array(
            'type' => array(
              'os2web_base_tax_site_structure' => 'os2web_base_tax_site_structure',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'term_parent',
          'settings' => array(
            'vid' => '11',
          ),
          'context' => 'argument_term_1',
          'not' => TRUE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'full-width-light-dark-light';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Centreret',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
      'light_section_1' => NULL,
      'light_section_2' => NULL,
      'dark_section_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name %term:field_os2web_base_field_spotbox:tid';
  $display->uuid = '8d932897-19d8-4e34-9bcd-27dce6ee5da5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__sitestruktur-niveau-1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-90ced79a-9c0b-46a5-8028-62a54de8b3ad';
  $pane->panel = 'dark_section_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_term_news-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '3',
    'offset' => '0',
    'exposed' => array(
      'field_os2web_base_field_promote_tid' => '5220',
    ),
    'context' => array(
      0 => 'argument_term_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'os2-equal-height-wrapper',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '90ced79a-9c0b-46a5-8028-62a54de8b3ad';
  $display->content['new-90ced79a-9c0b-46a5-8028-62a54de8b3ad'] = $pane;
  $display->panels['dark_section_1'][0] = 'new-90ced79a-9c0b-46a5-8028-62a54de8b3ad';
  $pane = new stdClass();
  $pane->pid = 'new-6264b920-c2d2-43b4-b259-dd80ecd3c3a5';
  $pane->panel = 'light_section_1';
  $pane->type = 'block';
  $pane->subtype = 'os2web_related_links-term_selfservice_links_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Selvbetjening',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'self-service-toggle',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6264b920-c2d2-43b4-b259-dd80ecd3c3a5';
  $display->content['new-6264b920-c2d2-43b4-b259-dd80ecd3c3a5'] = $pane;
  $display->panels['light_section_1'][0] = 'new-6264b920-c2d2-43b4-b259-dd80ecd3c3a5';
  $pane = new stdClass();
  $pane->pid = 'new-02fefd4a-1110-46a9-8628-153475ed93d8';
  $pane->panel = 'light_section_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_term_subterms-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'os2-equal-height-wrapper margin-bottom-xl',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '02fefd4a-1110-46a9-8628-153475ed93d8';
  $display->content['new-02fefd4a-1110-46a9-8628-153475ed93d8'] = $pane;
  $display->panels['light_section_1'][1] = 'new-02fefd4a-1110-46a9-8628-153475ed93d8';
  $pane = new stdClass();
  $pane->pid = 'new-79db2321-7360-4eeb-996b-c730956be8c1';
  $pane->panel = 'light_section_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'term_spots-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_term_1',
    ),
    'items_per_page' => '3',
    'offset' => '0',
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
    'css_class' => 'os2-equal-height-wrapper',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '79db2321-7360-4eeb-996b-c730956be8c1';
  $display->content['new-79db2321-7360-4eeb-996b-c730956be8c1'] = $pane;
  $display->panels['light_section_1'][2] = 'new-79db2321-7360-4eeb-996b-c730956be8c1';
  $pane = new stdClass();
  $pane->pid = 'new-6476ced0-d227-491e-912f-b8ab98e04653';
  $pane->panel = 'light_section_2';
  $pane->type = 'views_panes';
  $pane->subtype = 'term_spots-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '12',
    'offset' => '3',
    'context' => array(
      0 => 'argument_term_1',
    ),
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
  $pane->uuid = '6476ced0-d227-491e-912f-b8ab98e04653';
  $display->content['new-6476ced0-d227-491e-912f-b8ab98e04653'] = $pane;
  $display->panels['light_section_2'][0] = 'new-6476ced0-d227-491e-912f-b8ab98e04653';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__sitestruktur-niveau-1'] = $handler;

  return $export;
}
