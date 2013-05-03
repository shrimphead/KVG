<?php
/**
 * @file
 * kg_layout.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function kg_layout_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-section_taxonomy-field_fall'
  $field_instances['taxonomy_term-section_taxonomy-field_fall'] = array(
    'bundle' => 'section_taxonomy',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_fall',
    'label' => 'Fall',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'focus' => 1,
      'focus_lock_ratio' => 1,
      'focus_min_size' => '220x125',
      'max_filesize' => '1MB',
      'max_resolution' => '',
      'min_resolution' => '220x125',
      'title_field' => 0,
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
          ),
        ),
        'preview_image_style' => 'front-teaser_horizontal_small',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'taxonomy_term-section_taxonomy-field_spring'
  $field_instances['taxonomy_term-section_taxonomy-field_spring'] = array(
    'bundle' => 'section_taxonomy',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_spring',
    'label' => 'Spring',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'focus' => 1,
      'focus_lock_ratio' => 1,
      'focus_min_size' => '220x125',
      'max_filesize' => '1MB',
      'max_resolution' => '',
      'min_resolution' => '220x125',
      'title_field' => 0,
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
          ),
        ),
        'preview_image_style' => 'front-teaser_horizontal_small',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'taxonomy_term-section_taxonomy-field_summer'
  $field_instances['taxonomy_term-section_taxonomy-field_summer'] = array(
    'bundle' => 'section_taxonomy',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_summer',
    'label' => 'Summer',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'focus' => 1,
      'focus_lock_ratio' => 1,
      'focus_min_size' => '220x125',
      'max_filesize' => '1MB',
      'max_resolution' => '',
      'min_resolution' => '220x125',
      'title_field' => 0,
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
          ),
        ),
        'preview_image_style' => 'front-teaser_horizontal_small',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-section_taxonomy-field_winter'
  $field_instances['taxonomy_term-section_taxonomy-field_winter'] = array(
    'bundle' => 'section_taxonomy',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_winter',
    'label' => 'Winter',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'focus' => 1,
      'focus_lock_ratio' => 1,
      'focus_min_size' => '220x125',
      'max_filesize' => '1MB',
      'max_resolution' => '',
      'min_resolution' => '220x125',
      'title_field' => 0,
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
          ),
        ),
        'preview_image_style' => 'front-teaser_horizontal_small',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Fall');
  t('Spring');
  t('Summer');
  t('Winter');

  return $field_instances;
}
