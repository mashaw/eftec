<?php
/**
 * @file
 * _nbs_case_study_city_overview.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function _nbs_case_study_city_overview_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-overview_case_study-climate_adaptation'.
  $field_instances['node-overview_case_study-climate_adaptation'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 19,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'climate_adaptation',
    'label' => 'Developing climate change adaptation; improving risk management and resilience',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
        'label_help_description' => '',
      ),
      'type' => 'options_select',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-climate_mitigation'.
  $field_instances['node-overview_case_study-climate_mitigation'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 18,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'climate_mitigation',
    'label' => 'Developing climate change mitigation',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
        'label_help_description' => '',
      ),
      'type' => 'options_select',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-economic_opportunities'.
  $field_instances['node-overview_case_study-economic_opportunities'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'economic_opportunities',
    'label' => 'economic_opportunities',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 30,
    ),
  );

  // Exported field_instance:
  // 'node-overview_case_study-enhancing_sustainable_urban'.
  $field_instances['node-overview_case_study-enhancing_sustainable_urban'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 16,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'enhancing_sustainable_urban',
    'label' => 'Enhancing sustainable urbanisation',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
        'label_help_description' => '',
      ),
      'type' => 'options_select',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-eu_research_impacts'.
  $field_instances['node-overview_case_study-eu_research_impacts'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 30,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'eu_research_impacts',
    'label' => 'eu_research_impacts',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_actions'.
  $field_instances['node-overview_case_study-field_actions'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_actions',
    'label' => 'Actions',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'label_help_description' => '',
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_air_quality'.
  $field_instances['node-overview_case_study-field_air_quality'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_air_quality',
    'label' => 'Air quality',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
        'label_help_description' => '',
      ),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_banner_image'.
  $field_instances['node-overview_case_study-field_banner_image'] = array(
    'bundle' => 'overview_case_study',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
          'semantic_field_format' => 0,
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_banner_image',
    'label' => 'Banner image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'alt_field_default' => '',
      'alt_field_hide' => 0,
      'alt_field_sync_title' => 0,
      'alt_field_update_on_edit' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 1,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => 'images/nbs_case_study',
        ),
        'redirect' => 0,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'semantic_field_format' => '',
      'title_field' => 0,
      'title_field_default' => '',
      'title_field_hide' => 0,
      'title_field_update_on_edit' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'label_help_description' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_benefits_text'.
  $field_instances['node-overview_case_study-field_benefits_text'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_benefits_text',
    'label' => 'field_benefits_text',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_challenges'.
  $field_instances['node-overview_case_study-field_challenges'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_challenges',
    'label' => 'Challenges',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'label_help_description' => '',
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-overview_case_study-field_coastal_resilience'.
  $field_instances['node-overview_case_study-field_coastal_resilience'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_coastal_resilience',
    'label' => 'CoastaL resilience',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
        'label_help_description' => '',
      ),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_contacts'.
  $field_instances['node-overview_case_study-field_contacts'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contacts',
    'label' => 'field_contacts',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_drivers'.
  $field_instances['node-overview_case_study-field_drivers'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 28,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_drivers',
    'label' => 'field_drivers',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 33,
    ),
  );

  // Exported field_instance:
  // 'node-overview_case_study-field_ecosystem_based_approach'.
  $field_instances['node-overview_case_study-field_ecosystem_based_approach'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ecosystem_based_approach',
    'label' => 'Ecosystem based approach',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
        'label_help_description' => '',
      ),
      'type' => 'options_select',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_ecosystems'.
  $field_instances['node-overview_case_study-field_ecosystems'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 21,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ecosystems',
    'label' => 'field_ecosystems',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance:
  // 'node-overview_case_study-field_eu_research_impacts'.
  $field_instances['node-overview_case_study-field_eu_research_impacts'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 31,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eu_research_impacts',
    'label' => 'field_eu_research_impacts',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_geo_location'.
  $field_instances['node-overview_case_study-field_geo_location'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
          'semantic_field_format' => 0,
        ),
        'type' => 'geofield_wkt',
        'weight' => 1,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_geo_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geofield',
      'settings' => array(
        'html5_geolocation' => 0,
        'label_help_description' => '',
      ),
      'type' => 'geofield_latlon',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_integration'.
  $field_instances['node-overview_case_study-field_integration'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integration',
    'label' => 'field_integration',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_key_lessons'.
  $field_instances['node-overview_case_study-field_key_lessons'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_key_lessons',
    'label' => 'field_key_lessons',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_nbs_project'.
  $field_instances['node-overview_case_study-field_nbs_project'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nbs_project',
    'label' => 'NBS Project',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'label_help_description' => '',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_nbs_project2'.
  $field_instances['node-overview_case_study-field_nbs_project2'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nbs_project2',
    'label' => 'NBS Project',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'label_help_description' => '',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_objectives'.
  $field_instances['node-overview_case_study-field_objectives'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objectives',
    'label' => 'Objectives',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'label_help_description' => '',
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_participation'.
  $field_instances['node-overview_case_study-field_participation'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_participation',
    'label' => 'field_participation',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 29,
    ),
  );

  // Exported field_instance:
  // 'node-overview_case_study-field_public_health_wellbeing'.
  $field_instances['node-overview_case_study-field_public_health_wellbeing'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_health_wellbeing',
    'label' => 'Public health wellbeing',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
        'label_help_description' => '',
      ),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'node-overview_case_study-field_social_justice_cohesion'.
  $field_instances['node-overview_case_study-field_social_justice_cohesion'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_social_justice_cohesion',
    'label' => 'Social justice cohesion',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
        'label_help_description' => '',
      ),
      'type' => 'options_select',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'node-overview_case_study-field_success_limiting_factors'.
  $field_instances['node-overview_case_study-field_success_limiting_factors'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 27,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_success_limiting_factors',
    'label' => 'field_success_limiting_factors',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'node-overview_case_study-field_sustainable_urban_regen'.
  $field_instances['node-overview_case_study-field_sustainable_urban_regen'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 12,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sustainable_urban_regen',
    'label' => 'Sustainable urban regeneration',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
        'label_help_description' => '',
      ),
      'type' => 'options_select',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-field_water_management'.
  $field_instances['node-overview_case_study-field_water_management'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_water_management',
    'label' => 'Water management',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
        'label_help_description' => '',
      ),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-monitoring_evaluation'.
  $field_instances['node-overview_case_study-monitoring_evaluation'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 29,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'monitoring_evaluation',
    'label' => 'monitoring_evaluation',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-overview_case_study-restoring_ecosystems'.
  $field_instances['node-overview_case_study-restoring_ecosystems'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 17,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'restoring_ecosystems',
    'label' => 'Restoring ecosystems and their functions',
    'required' => 0,
    'settings' => array(
      'semantic_field_format' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
        'label_help_description' => '',
      ),
      'type' => 'options_select',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'node-overview_case_study-success_limiting_factors'.
  $field_instances['node-overview_case_study-success_limiting_factors'] = array(
    'bundle' => 'overview_case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'community_node' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'embedded_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'group_members' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'similar_uses' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'success_limiting_factors',
    'label' => 'success_limiting_factors',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Actions');
  t('Air quality');
  t('Banner image');
  t('Challenges');
  t('CoastaL resilience');
  t('Developing climate change adaptation; improving risk management and resilience');
  t('Developing climate change mitigation');
  t('Ecosystem based approach');
  t('Enhancing sustainable urbanisation');
  t('Location');
  t('NBS Project');
  t('Objectives');
  t('Public health wellbeing');
  t('Restoring ecosystems and their functions');
  t('Social justice cohesion');
  t('Sustainable urban regeneration');
  t('Water management');
  t('economic_opportunities');
  t('eu_research_impacts');
  t('field_benefits_text');
  t('field_contacts');
  t('field_drivers');
  t('field_ecosystems');
  t('field_eu_research_impacts');
  t('field_integration');
  t('field_key_lessons');
  t('field_participation');
  t('field_success_limiting_factors');
  t('monitoring_evaluation');
  t('success_limiting_factors');

  return $field_instances;
}
