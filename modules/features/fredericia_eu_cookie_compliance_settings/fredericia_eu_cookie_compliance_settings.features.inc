<?php
/**
 * @file
 * fredericia_eu_cookie_compliance_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fredericia_eu_cookie_compliance_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
