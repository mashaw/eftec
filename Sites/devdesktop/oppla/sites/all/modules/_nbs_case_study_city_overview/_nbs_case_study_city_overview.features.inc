<?php
/**
 * @file
 * _nbs_case_study_city_overview.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function _nbs_case_study_city_overview_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function _nbs_case_study_city_overview_node_info() {
  $items = array(
    'overview_case_study' => array(
      'name' => t('NBS Case Study - City Overview'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
