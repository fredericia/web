<?php
/**
 * @file
 * fredericia_footer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fredericia_footer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
