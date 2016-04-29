<?php
/**
 * @file
 * fredericia.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fredericia_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fredericia_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function fredericia_image_default_styles() {
  $styles = array();

  // Exported image style: fredericia_content_image.
  $styles['fredericia_content_image'] = array(
    'label' => 'fredericia_content_image',
    'effects' => array(
      1 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 900,
          'height' => 449,
          'anchor' => 'center-center',
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
