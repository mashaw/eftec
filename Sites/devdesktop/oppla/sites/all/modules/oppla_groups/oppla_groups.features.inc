<?php
/**
 * @file
 * oppla_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oppla_groups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function oppla_groups_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function oppla_groups_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => t('The group that will have members and content associated with.'),
      'has_title' => '1',
      'title_label' => t('Group title'),
      'help' => '',
    ),
    'post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => t('Content that will belong to a single or multiple groups.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
