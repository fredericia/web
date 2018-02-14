<?php
/**
 * @file
 * os2web_spotbox.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_spotbox_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_os2web_spotbox_box';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_os2web_spotbox_box'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_os2web_spotbox_box';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_os2web_spotbox_box'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_os2web_spotbox_box';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_os2web_spotbox_box'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_os2web_spotbox_box_pattern';
  $strongarm->value = 'noindex/[node:title]';
  $export['pathauto_node_os2web_spotbox_box_pattern'] = $strongarm;

  return $export;
}
