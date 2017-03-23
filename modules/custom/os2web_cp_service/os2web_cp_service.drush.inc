<?php

/**
 * @file
 * This file implements drush functions for CP Service
 */

/**
 * Implements hook_drush_command().
 */
function os2web_cp_service_drush_command() {
  $items = array();
  $items['cp-update-ref'] = array(
    'description' => 'Update references in CP cases',
    'arguments' => array(),
    'aliases' => array('cp-up'),
  );
  $items['cp-cleanup'] = array(
    'description' => 'Delete all documents with a broken reference.',
    'arguments' => array(),
    'aliases' => array('cp-cl'),
  );
  $items['cp-docs-delete'] = array(
    'description' => 'Delete all documents empty title.',
    'arguments' => array(),
    'aliases' => array('cp-doc-del'),
  );
  $items['cp-case-duplicates-delete'] = array(
    'description' => 'Delete all case duplicates',
    'arguments' => array(),
    'aliases' => array('cp-case-dup-del'),
  );

  return $items;
}

/**
 * Implements drush_COMMAND().
 */
function drush_os2web_cp_service_cp_update_ref() {

  // Update all doc and cases where there are no reference from case -> document.
  $nodes = db_query("SELECT *
                    FROM {node} n
                    WHERE n.type = 'os2web_cp_service_cp_document'
                    AND n.nid NOT IN (SELECT field_os2web_cp_service_doc_ref_target_id FROM field_data_field_os2web_cp_service_doc_ref)")->fetchAllAssoc('nid');

  $field_name = 'field_os2web_cp_service_case_id';
  $field_info = field_info_field($field_name);
  $field_id = $field_info['id'];
  field_attach_load('node', $nodes, FIELD_LOAD_CURRENT, array('field_id' => $field_id));

  foreach ($nodes as $node) {

    if (!empty($node->field_os2web_cp_service_case_id['und'][0]['value'])) {
      $nid = db_query(
        "SELECT entity_id FROM field_data_field_os2web_cp_service_case_id WHERE bundle = 'os2web_cp_service_cp_case' AND field_os2web_cp_service_case_id_value = :id",
        array(':id' => $node->field_os2web_cp_service_case_id['und'][0]['value'])
      )->fetchColumn();

      if (!$nid) {
        drush_log(t('Cannot find case with id: !id', array('!id' => $node->field_os2web_cp_service_case_id['und'][0]['value'])), 'warning');
        continue;
      }

      $ref_node = node_load($nid);
      $ref_node->field_os2web_cp_service_doc_ref[LANGUAGE_NONE][]['target_id'] = $node->nid;
      node_save($ref_node);

      // Update doc ref.
      if (isset($ref_node->field_os2web_cp_service_sysid[LANGUAGE_NONE][0]['value'])) {
        $node->field_os2web_cp_service_case_sid[LANGUAGE_NONE][0]['value'] = $ref_node->field_os2web_cp_service_sysid[LANGUAGE_NONE][0]['value'];
        node_save($node);
      }

      drush_log(t('Saved new reference to: !ref in !node', array('!ref' => $ref_node->nid, '!node' => $node->nid)), 'success');
    }
  }
}

/**
 * Implements drush_COMMAND().
 */
function drush_os2web_cp_service_cp_cleanup() {

  // Find all documents which has no references from a case.
  $nodes = db_query("SELECT *
                     FROM node n
                     WHERE n.type =  'os2web_cp_service_cp_document'
                     AND n.nid NOT IN (
                       SELECT field_os2web_cp_service_doc_ref_target_id
                       FROM field_data_field_os2web_cp_service_doc_ref
                     )");

  foreach ($nodes as $node) {
    node_delete($node->nid);
    drush_log(t('Deleted document: !node', array('!node' => $node->nid)), 'success');
  }
}

/**
 * Implements drush_COMMAND().
 */
function drush_os2web_cp_service_cp_docs_delete() {
// Find all documents which has epty title.
  $nodes = db_query("SELECT *
                     FROM node n
                     WHERE n.type =  'os2web_cp_service_cp_document'
                     AND n.title=''");

  foreach ($nodes as $node) {
    node_delete($node->nid);
    drush_log(t('Deleted document: !node', array('!node' => $node->nid)), 'success');
  }
}

/**
 * Implements drush_COMMAND().
 */
function drush_os2web_cp_service_cp_case_duplicates_delete() {
// Find all duplicates in field_os2web_cp_service_sysid fields
  $sysids = db_query("SELECT field_os2web_cp_service_sysid_value
                     FROM field_data_field_os2web_cp_service_sysid sysid
                     WHERE sysid.bundle =  'os2web_cp_service_cp_case'
                     GROUP BY field_os2web_cp_service_sysid_value
                     HAVING COUNT(*)>1")->fetchAll();
  $duplicates = array(); //array with duplicates;
  $nodes_for_delete = array(); //array with node whcih should be deleted
  $saved_nodes = array(); //array with node whcih should be saved
 // grouping duplicates
  foreach ($sysids as $key => $sysid) {
    $query = new EntityFieldQuery();
    $result = $query
      ->entityCondition('entity_type', 'node')
      ->propertyCondition('type', 'os2web_cp_service_cp_case')
      ->fieldCondition('field_os2web_cp_service_sysid', 'value', $sysid->field_os2web_cp_service_sysid_value, '=')
      ->execute();
    // if found 2+ nodes with same field_os2web_cp_service_sysid
    if (count($result['node']) >= 2) {
      $nids = (isset($result['node'])) ? array_keys($result['node']) : NULL;
      $nodes = node_load_multiple($nids);
      //check if fields field_os2web_cp_service_key and field_os2web_cp_service_case_id are same
      for ($i = 0; $i < count($nids) - 1; $i++) {
        if ($nodes[$nids[$i]]->field_os2web_cp_service_key == $nodes[$nids[$i + 1]]->field_os2web_cp_service_key && $nodes[$nids[$i]]->field_os2web_cp_service_case_id == $nodes[$nids[$i + 1]]->field_os2web_cp_service_case_id) {
          $duplicates[$key][$nodes[$nids[$i]]->nid] = $nodes[$nids[$i]];
          $duplicates[$key][$nodes[$nids[$i + 1]]->nid] = $nodes[$nids[$i + 1]];
        }
      }
    }
  }
  /**
   * Array $duplicates contains all duplicates
   *   $duplicates = array ([0] => array
   *        $nid => node_obj))
   *        [1] => ....)
  **/
  foreach ($duplicates as $key => $nodes) {
    foreach ($nodes as $nid => $node) {
      //check if node is attached to other nodes
      $query = new EntityFieldQuery();
      $result = $query
        ->entityCondition('entity_type', 'node')
        ->fieldCondition('field_os2web_base_case_ref', 'target_id', $node->nid, '=')
        ->execute();
      // if Yes we need save certain node
      if (count($result['node'])) {
        $saved_nodes[$key][] = $nid;
      } else {
        $nodes_for_delete[$key][] = $nid;
      }
    }
    // if no one node is attached to other node we leave last node (others duplicates will be deleted
    if (!isset($saved_nodes[$key]))
      $saved_nodes[$key][] = array_pop($nodes_for_delete[$key]);
  }
  // check node fields contant and merge information into saved node
  $is_updated = FALSE;
  $node_fields = field_info_instances('node', 'os2web_cp_service_cp_case');
  foreach ($saved_nodes as $k => $n) {
    $saved_node_nid = array_pop($n);
    foreach ($nodes_for_delete[$k] as $d_nid) {
      foreach ($node_fields as $field_name => $field) {
        if (!isset($duplicates[$key][$saved_node_nid]->$field_name) && (isset($duplicates[$key][$d_nid]->$field_name) && !empty($duplicates[$key][$d_nid]->$field_name))) {
          $is_updated = TRUE;
          $duplicates[$key][$saved_node_nid]->$field_name = $duplicates[$key][$d_nid]->$field_name;
        }
      }
    }

    if ($is_updated)
      node_save($duplicates[$key][$saved_node_nid]); //if node was updated - save it
    node_delete_multiple($nodes_for_delete[$k]); //delete duplicates
    $nodes = implode(',', $nodes_for_delete[$k]);
    drush_log(t('Deleted nodes: !nodes', array('!nodes' => $nodes)), 'success');
  }
}
