<?php
/**
 * @file
 * oppla_groups.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function oppla_groups_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_studies|node|group|form';
  $field_group->group_name = 'group_case_studies';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Case studies',
    'weight' => '6',
    'children' => array(
      0 => 'field_related_case_studies',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Case studies',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-case-studies field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_case_studies|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|group|form';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Keywords',
    'weight' => '8',
    'children' => array(
      0 => 'field_ecosystem_types',
      1 => 'field_regions',
      2 => 'field_topics',
      3 => 'field_implementation',
      4 => 'field_methods',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Keywords',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-keywords field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_keywords|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_products|node|group|form';
  $field_group->group_name = 'group_products';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Products',
    'weight' => '7',
    'children' => array(
      0 => 'field_product_ref',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Products',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-products field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_products|node|group|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Case studies');
  t('Keywords');
  t('Products');

  return $field_groups;
}
