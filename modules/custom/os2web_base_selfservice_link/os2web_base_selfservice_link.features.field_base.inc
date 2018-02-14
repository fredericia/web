<?php
/**
 * @file
 * os2web_base_selfservice_link.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function os2web_base_selfservice_link_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_os2web_base_doc_ref_single'.
  $field_bases['field_os2web_base_doc_ref_single'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_base_doc_ref_single',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_document',
          'view_name' => 'os2web_acadre_document_displayer',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
