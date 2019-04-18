<?php

/**
 * Field handler to display component value.
 */
class webform_views_submitted_handler_field extends views_handler_field {
  function construct() {
    parent::construct();
    module_load_include('inc', 'webform', 'components/select');
    $this->webform_component = db_query("SELECT * FROM {webform_component} WHERE cid = :cid", array(':cid' => $this->definition['webform component']))->fetchAssoc();
    $this->webform_component['extra'] = unserialize($this->webform_component['extra']);
    //CUSTOM CODE
    if($this->webform_component['type'] == 'select'){
      $this->webform_component['options'] = _webform_select_options($this->webform_component, FALSE, FALSE);
      if(isset ($this->options['expose']))
        $this->webform_component['custom_options'] = _webform_select_options_from_text($this->options['expose']['webform_component_custom_options']);
    }
  }
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    if ($this->webform_component['type'] == 'select') {
      $form['webform_component_custom_options'] = array(
        '#title' => t('Custom Options'),
        '#type' => 'textarea',
        '#description' => t('Customize the output of this field by creating different options'),
        '#default_value' => $this->options['webform_component_custom_options'],
      );
    }
  }
  function render($values) {
    $value = $values->{$this->field_alias};
    if ($this->webform_component['type'] == 'select') {
      if (isset($this->options['webform_component_custom_options']) && $this->options['webform_component_custom_options'] != '') {
        $options = _webform_select_options_from_text($this->options['webform_component_custom_options']);
        return $options[$value];
      }
      if(isset($this->webform_component['options'][$value])){
        return $this->webform_component['options'][$value];
      }
    }
    return $value;
  }
}
