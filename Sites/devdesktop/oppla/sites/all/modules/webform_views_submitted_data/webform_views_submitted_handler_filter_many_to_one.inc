<?php

/**
 * Field handler to display component options.
 */
class webform_views_submitted_handler_filter_many_to_one extends views_handler_filter_many_to_one {
  function construct() {
    parent::construct();
    module_load_include('inc', 'webform', 'components/select');
    $this->webform_component = db_query("SELECT * FROM {webform_component} WHERE cid = :cid", array(':cid' => $this->definition['webform component']))->fetchAssoc();
    $this->webform_component['extra'] = unserialize($this->webform_component['extra']);
    $this->webform_component['options'] = _webform_select_options($this->webform_component, FALSE, FALSE);
  }
  function expose_options() {
    parent::expose_options();
    $this->options['expose']['identifier'] = $this->webform_component['form_key'];
  }
  function expose_form_right(&$form, &$form_state) {
    parent::expose_form_right($form, $form_state);
    $form['expose']['webform_component_custom_options'] = array(
      '#title' => t('Custom Options'),
      '#type' => 'textarea',
      '#description' => t('Customize the output of this field by creating different options'),
      '#default_value' => $this->options['expose']['webform_component_custom_options'],
    );
  }
  function get_value_options() {
    if (isset($this->options['expose']['webform_component_custom_options']) && $this->options['expose']['webform_component_custom_options'] != '') {
      module_load_include('inc', 'webform', 'components/select');
      $this->value_options = _webform_select_options_from_text($this->options['expose']['webform_component_custom_options']);
    }
    else {
      $this->value_options = $this->webform_component['options'];
    }
  }
}
