<?php

/**
 * @file
 * Implementation of hooks for feeds module
 */

/**
 * Implementation of hook_feeds_node_processor_targets_alter().
 */
function postal_feeds_node_processor_targets_alter($targets, $content_type) {
  $info = content_types($content_type);
  $fields = array();
  if (isset($info['fields']) && count($info['fields'])) {
    foreach ($info['fields'] as $field_name => $field) {
      // locate and process postal fields
      if (in_array($field['type'], array('postal'))) {
        $name = isset($field['widget']['label']) ? $field['widget']['label'] : $field_name;
        // get component elements of the field
        $columns = postal_database_columns($field);
        // get rid of the type and name columns, not needed here
        unset($columns['type']);
        unset($columns['name']);
        foreach ($columns as $key => $column) {
          $targets[$field_name .'#'. $key] = array(
            'name' => $name . ' (' . $column['description'] . ')',
            'callback' => 'postal_feeds_set_target',
            'description' => t('The value for !value of the CCK !name field of the node.', array('!value' => $column['description'], '!name' => $name)),
          );
        }
      }
    }
  }
}

/**
 * Implementation of hook_feeds_set_target().
 */
function postal_feeds_set_target($node, $target, $value) {
  list($field_name, $sub_field) = split('#', $target);

  $field_data = isset($node->$field_name) ? $node->$field_name : array();

  if(!is_array($value)) {
    $value = array($value);
  }
  $i = 0;
  foreach ($value as $v) {
    $field_data[$i][$sub_field] = $v;
    // Set a default type granularity TODO: make this smarter. 
    $field_data[$i]['type'] = '';
    $i++;
  }
  $node->$field_name = $field_data;
}
