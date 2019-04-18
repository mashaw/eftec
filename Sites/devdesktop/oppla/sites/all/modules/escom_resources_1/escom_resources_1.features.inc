<?php
/**
 * @file
 * escom_resources_1.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function escom_resources_1_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function escom_resources_1_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function escom_resources_1_node_info() {
  $items = array(
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('Use this to add a resource to the library.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
