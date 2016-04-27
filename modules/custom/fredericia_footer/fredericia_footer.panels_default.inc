<?php
/**
 * @file
 * fredericia_footer.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function fredericia_footer_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = 'Footer';
  $mini->admin_title = 'Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cbebd942-c859-4609-ab08-65c1862778a2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e5fb1baa-333f-4ef9-b5f3-9e3fd3759814';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Kontatkt',
      'title' => 'Kontakt',
      'body' => 'Fredericia Kommune
Gothersgade 20
5700 Fredericia
Telefon 7210 7000
kommunen@fredericia.dk',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e5fb1baa-333f-4ef9-b5f3-9e3fd3759814';
    $display->content['new-e5fb1baa-333f-4ef9-b5f3-9e3fd3759814'] = $pane;
    $display->panels['left'][0] = 'new-e5fb1baa-333f-4ef9-b5f3-9e3fd3759814';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
