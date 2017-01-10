<?php
/**
 * @file
 * umlso_vagrant_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function umlso_vagrant_features_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_paged_content_djatoka_url';
  $strongarm->value = 'http://localhost:8080/adore-djatoka/';
  $export['islandora_paged_content_djatoka_url'] = $strongarm;

  return $export;
}
