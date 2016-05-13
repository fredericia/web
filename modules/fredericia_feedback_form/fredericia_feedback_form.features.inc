<?php
/**
 * @file
 * fredericia_feedback_form.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fredericia_feedback_form_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
