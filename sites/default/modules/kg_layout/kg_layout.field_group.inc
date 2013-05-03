<?php
/**
 * @file
 * kg_layout.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kg_layout_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_season_images|taxonomy_term|section_taxonomy|form';
  $field_group->group_name = 'group_season_images';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'section_taxonomy';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Seasonal Images',
    'weight' => '1',
    'children' => array(
      0 => 'field_summer',
      1 => 'field_spring',
      2 => 'field_fall',
      3 => 'field_winter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_season_images|taxonomy_term|section_taxonomy|form'] = $field_group;

  return $export;
}
