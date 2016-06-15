<?php
/**
 * @file
 * bellcom_elasticsearch.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bellcom_elasticsearch_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bellcom_elasticsearch_synonyms';
  $strongarm->value = 'myself, mig';
  $export['bellcom_elasticsearch_synonyms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bellcom_elasticsearch_synonyms_active';
  $strongarm->value = 1;
  $export['bellcom_elasticsearch_synonyms_active'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bellcom_elasticsearch_synonyms_cluser';
  $strongarm->value = 'elasticsearch_cluster';
  $export['bellcom_elasticsearch_synonyms_cluser'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bellcom_elasticsearch_synonyms_file_path';
  $strongarm->value = 'public://';
  $export['bellcom_elasticsearch_synonyms_file_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bellcom_elasticsearch_synonyms_index';
  $strongarm->value = 'test_intranet_search';
  $export['bellcom_elasticsearch_synonyms_index'] = $strongarm;

  return $export;
}
