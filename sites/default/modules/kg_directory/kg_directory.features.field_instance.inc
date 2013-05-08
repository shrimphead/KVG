<?php
/**
 * @file
 * kg_directory.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function kg_directory_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-directory-body'
  $field_instances['node-directory-body'] = array(
    'bundle' => 'directory',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Kaslo Visitor Guide Directory Listings',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 80,
        ),
        'type' => 'text_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-directory-field_accommodation_type'
  $field_instances['node-directory-field_accommodation_type'] = array(
    'bundle' => 'directory',
    'default_value' => NULL,
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_accommodation_type',
    'label' => 'Accommodation Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-directory-field_email'
  $field_instances['node-directory-field_email'] = array(
    'bundle' => 'directory',
    'default_value' => array(
      0 => array(
        'email' => '',
      ),
    ),
    'deleted' => 0,
    'description' => 'Email address',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => -1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => -1,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => -1,
    'widget' => array(
      'active' => 0,
      'module' => 'email',
      'settings' => array(
        'default_value_php' => NULL,
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => -1,
    ),
    'widget_type' => 'email_textfield',
  );

  // Exported field_instance: 'node-directory-field_facilities'
  $field_instances['node-directory-field_facilities'] = array(
    'bundle' => 'directory',
    'default_value' => NULL,
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_facilities',
    'label' => 'Facilities',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-directory-field_free_ad'
  $field_instances['node-directory-field_free_ad'] = array(
    'bundle' => 'directory',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_free_ad',
    'label' => 'Free Ad',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-directory-field_hours'
  $field_instances['node-directory-field_hours'] = array(
    'bundle' => 'directory',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_hours][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => 'Hours of operation. Eg. (8am - 5pm; Mon to Saturday.)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -4,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hours',
    'label' => 'Hours',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => -4,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-directory-field_image'
  $field_instances['node-directory-field_image'] = array(
    'bundle' => 'directory',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'Upload image',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => -3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => -3,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => -3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Optional Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images',
      'file_extensions' => 'png gif jpg jpeg',
      'focus' => 0,
      'focus_lock_ratio' => 0,
      'focus_min_size' => '',
      'max_filesize' => '2M',
      'max_resolution' => '2000x2000',
      'min_resolution' => '400x400',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => -3,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
      'settings' => array(
        'filefield_source_attach_absolute' => 0,
        'filefield_source_attach_mode' => 'move',
        'filefield_source_attach_path' => 'images',
        'filefield_source_autocomplete' => 1,
        'filefield_sources' => array(
          'attach' => 0,
          'imce' => 0,
          'reference' => 'reference',
          'remote' => 0,
        ),
        'imagecrop' => 0,
        'imagecrop_presets' => array(
          'image_horizontal' => 0,
          'image_vertical' => 0,
        ),
        'insert' => FALSE,
        'insert_class' => '',
        'insert_default' => array(
          0 => 'auto',
        ),
        'insert_styles' => array(
          'auto' => FALSE,
          'image' => FALSE,
          'imagecache_box' => FALSE,
          'link' => FALSE,
          0 => 1,
          'imagecache_image_horizontal' => TRUE,
          'imagecache_image_logo' => TRUE,
          'imagecache_image_vertical' => TRUE,
        ),
        'insert_width' => 650,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => 9,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-directory-field_kvg_ad'
  $field_instances['node-directory-field_kvg_ad'] = array(
    'bundle' => 'directory',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'Upload Kaslo Visitor Guide ad as JPG or GIF image. Please remove all spaces, ampersands (&), and quotation marks, from file name to ensure proper file handling.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => -3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => -3,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => -3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => -3,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => -3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_url_plain',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => -3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_kvg_ad',
    'label' => 'KVG Ad',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'description_field' => 0,
      'file_directory' => 'kvg_pdf',
      'file_extensions' => 'jpg gif png',
      'focus' => 0,
      'focus_lock_ratio' => 0,
      'focus_min_size' => '',
      'max_filesize' => '2MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => -3,
    'widget' => array(
      'active' => 0,
      'module' => 'file',
      'settings' => array(
        'filefield_source_attach_absolute' => 0,
        'filefield_source_attach_mode' => 'move',
        'filefield_source_attach_path' => 'kvg_pdf',
        'filefield_source_autocomplete' => 1,
        'filefield_sources' => array(
          'attach' => 0,
          'imce' => 0,
          'reference' => 'reference',
          'remote' => 0,
        ),
        'insert' => FALSE,
        'insert_class' => '',
        'insert_default' => array(
          0 => 'auto',
        ),
        'insert_styles' => array(
          'auto' => FALSE,
          0 => 1,
          'image' => FALSE,
          'imagecache_box' => FALSE,
          'imagecache_image_horizontal' => FALSE,
          'imagecache_image_logo' => FALSE,
          'imagecache_image_vertical' => FALSE,
          'link' => FALSE,
        ),
        'insert_width' => '',
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 3,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-directory-field_section'
  $field_instances['node-directory-field_section'] = array(
    'bundle' => 'directory',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'field_section',
    'label' => 'Section',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-directory-field_website'
  $field_instances['node-directory-field_website'] = array(
    'bundle' => 'directory',
    'default_value' => array(
      0 => array(
        'url' => '',
      ),
    ),
    'deleted' => 0,
    'description' => 'Website address',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_url',
        'weight' => -2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_url',
        'weight' => -2,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => -2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_website',
    'label' => 'Website',
    'required' => FALSE,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => '_blank',
      ),
      'display' => array(
        'url_cutoff' => 60,
      ),
      'enable_tokens' => 0,
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => 'LINK',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => '',
    ),
    'weight' => -2,
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'link_field',
      'weight' => -2,
    ),
    'widget_type' => 'link',
  );

  // Exported field_instance: 'node-directory-field_year'
  $field_instances['node-directory-field_year'] = array(
    'bundle' => 'directory',
    'default_value' => array(
      0 => array(
        'value' => 2012,
      ),
    ),
    'deleted' => 0,
    'description' => 'The year this ad appeared in the Kaslo Visitor Guide',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => -4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => -4,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -4,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -4,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -4,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -4,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_year',
    'label' => 'Year',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => -4,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
    'widget_type' => 'optionwidgets_select',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accommodation Type');
  t('Description');
  t('Email');
  t('Email address');
  t('Facilities');
  t('Free Ad');
  t('Hours');
  t('Hours of operation. Eg. (8am - 5pm; Mon to Saturday.)');
  t('KVG Ad');
  t('Kaslo Visitor Guide Directory Listings');
  t('Optional Image');
  t('Section');
  t('The year this ad appeared in the Kaslo Visitor Guide');
  t('Upload Kaslo Visitor Guide ad as JPG or GIF image. Please remove all spaces, ampersands (&), and quotation marks, from file name to ensure proper file handling.');
  t('Upload image');
  t('Website');
  t('Website address');
  t('Year');

  return $field_instances;
}
