<?php

/**
 * Imprementation of hook_views_submitted_data().
 */
function webform_views_submitted_views_data() {
  $res = db_query("SELECT c.nid, c.cid, c.form_key, c.name, c.extra, c.type, n.title FROM {webform_component} c LEFT JOIN {node} n ON c.nid = n.nid");
  while ($component = $res->fetchAssoc()) {
    $key = "webform_submitted_data_$component[nid]_$component[form_key]";
    $data[$key]['table']['group'] = t('Webform submitted data');
    $data[$key]['table']['join'] = array(
      'webform_submissions' => array(
        'table' => 'webform_submitted_data',
        'left_field' => 'sid',
        'field' => 'sid',
        'extra' => array(
          array(
            'field' => 'nid',
            'value' => $component['nid'],
            'operator' => '=',
            'numeric' => TRUE,
          ),
          array(
            'field' => 'cid',
            'value' => $component['cid'],
            'operator' => '=',
            'numeric' => TRUE,
          ),
        ),
      ),
    );
    $data[$key][$component['form_key']] = array(
      'real field' => 'data',
      'title' => t($component['name']) . ' (' . $component['form_key'] . ' in '. $component['title'] . ')',
      'help' => t(ucwords($component['type'])) . ' - ' . t('Appears in') . ': ' . $component['title'],
      'field' => array(
        'handler' => 'webform_views_submitted_handler_field',
        'click sortable' => TRUE,
        'webform component' => $component['cid'],
      ),
      'filter' => array(
        'title' => t($component['name']) . ' (' . $component['form_key'] . ' in '. $component['title'] . ')',
        'handler' => ($component['type'] == 'select') ? 'webform_views_submitted_handler_filter_many_to_one' : 'views_handler_filter_string',
        'webform component' => $component['cid'],
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    );
  }
  return $data;
}
