<?php
/**
 * @file
 * _nbs_case_study_city_overview.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function _nbs_case_study_city_overview_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ecosystem_services|node|overview_case_study|form';
  $field_group->group_name = 'group_ecosystem_services';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'overview_case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Table 1 - Ecosystem Services',
    'weight' => '9',
    'children' => array(
      0 => 'field_nbs_project',
      1 => 'field_water_management',
      2 => 'field_coastal_resilience',
      3 => 'field_air_quality',
      4 => 'field_public_health_wellbeing',
      5 => 'field_sustainable_urban_regen',
      6 => 'field_social_justice_cohesion',
      7 => 'field_ecosystem_based_approach',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ecosystem-services field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ecosystem_services|node|overview_case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nbs_multiple_benefits|node|overview_case_study|form';
  $field_group->group_name = 'group_nbs_multiple_benefits';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'overview_case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Table 2 - NBS Multiple Benefits',
    'weight' => '20',
    'children' => array(
      0 => 'field_nbs_project2',
      1 => 'enhancing_sustainable_urban',
      2 => 'restoring_ecosystems',
      3 => 'climate_mitigation',
      4 => 'climate_adaptation',
      5 => '_add_new_field',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nbs-multiple-benefits field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_nbs_multiple_benefits|node|overview_case_study|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Table 1 - Ecosystem Services');
  t('Table 2 - NBS Multiple Benefits');

  return $field_groups;
}
