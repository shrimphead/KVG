<?php

/**
 * Implementation of hook_content_default_fields().
 */
function kvg_directory_content_default_fields() {
  $fields = array();

  // Exported field: field_email
  $fields['directory-field_email'] = array(
    'field_name' => 'field_email',
    'type_name' => 'directory',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => 'group_contact',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '0',
    'multiple' => '0',
    'module' => 'email',
    'active' => '1',
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Email',
      'weight' => '-1',
      'description' => 'Email address',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_hours
  $fields['directory-field_hours'] = array(
    'field_name' => 'field_hours',
    'type_name' => 'directory',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => 'group_contact',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_hours][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Hours',
      'weight' => '-4',
      'description' => 'Hours of operation. Eg. (8am - 5pm; Mon to Saturday.)',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_image
  $fields['directory-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'directory',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => 'group_optional',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'images',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '5MB',
      'max_resolution' => '2000x2000',
      'min_resolution' => '400x400',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => FALSE,
      'insert_styles' => array(
        'imagecache_image_horizontal' => TRUE,
        'imagecache_image_logo' => TRUE,
        'imagecache_image_vertical' => TRUE,
        '0' => 1,
        'auto' => FALSE,
        'link' => FALSE,
        'image' => FALSE,
        'imagecache_box' => FALSE,
      ),
      'insert_default' => array(
        '0' => 'auto',
      ),
      'insert_class' => '',
      'insert_width' => '650',
      'imagecrop' => 0,
      'imagecrop_presets' => array(
        'image_horizontal' => 0,
        'image_vertical' => 0,
      ),
      'filefield_sources' => array(
        'imce' => 0,
        'remote' => 0,
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_autocomplete' => '0',
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'label' => 'Optional Image',
      'weight' => '-3',
      'description' => 'Upload image',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_kvg_ad
  $fields['directory-field_kvg_ad'] = array(
    'field_name' => 'field_kvg_ad',
    'type_name' => 'directory',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => 'group_info',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'front_page_small_articles_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__image_logo__original',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'jpg gif png',
      'file_path' => 'kvg_pdf',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '2MB',
      'max_filesize_per_node' => '5MB',
      'insert' => FALSE,
      'insert_styles' => array(
        '0' => 1,
        'auto' => FALSE,
        'link' => FALSE,
        'image' => FALSE,
        'imagecache_box' => FALSE,
        'imagecache_image_horizontal' => FALSE,
        'imagecache_image_logo' => FALSE,
        'imagecache_image_vertical' => FALSE,
      ),
      'insert_default' => array(
        '0' => 'auto',
      ),
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'KVG Ad',
      'weight' => '-3',
      'description' => 'Upload Kaslo Visitor Guide ad as JPG or GIF image. Please remove all spaces, ampersands (&), and quotation marks, from file name to ensure proper file handling.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_phone
  $fields['directory-field_phone'] = array(
    'field_name' => 'field_phone',
    'type_name' => 'directory',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => 'group_contact',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'ca_phone',
    'required' => '0',
    'multiple' => '2',
    'module' => 'phone',
    'active' => '1',
    'phone_country_code' => 0,
    'ca_phone_separator' => '-',
    'ca_phone_parentheses' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_phone][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Phone',
      'weight' => '-3',
      'description' => 'Phone number',
      'type' => 'phone_textfield',
      'module' => 'phone',
    ),
  );

  // Exported field: field_referrers
  $fields['directory-field_referrers'] = array(
    'field_name' => 'field_referrers',
    'type_name' => 'directory',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'teaser',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereferrer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereferrer',
    'active' => '1',
    'referrer_types' => array(
      'article' => 'article',
      'directory' => 'directory',
      'visitor_guide_pages' => 0,
      'webform' => 0,
    ),
    'referrer_fields' => array(
      'field_directory_reference' => 'field_directory_reference',
    ),
    'referrer_nodes_per_page' => '0',
    'referrer_pager_element' => '0',
    'referrer_order' => 'TITLE_ASC',
    'widget' => array(
      'label' => 'Referrers',
      'weight' => '5',
      'description' => '',
      'type' => 'nodereferrer_list',
      'module' => 'nodereferrer',
    ),
  );

  // Exported field: field_section
  $fields['directory-field_section'] = array(
    'field_name' => 'field_section',
    'type_name' => 'directory',
    'display_settings' => array(
      'weight' => '-5',
      'parent' => 'group_info',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '3',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'culture|Artists & Artisans
events|Events & Recreation
accommodations|Accommodations
dining|Restaurants
shopping|Shopping & Services',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Section',
      'weight' => '-5',
      'description' => 'Choose listing section',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_website
  $fields['directory-field_website'] = array(
    'field_name' => 'field_website',
    'type_name' => 'directory',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => 'group_contact',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'url',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '60',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => 'LINK',
    'enable_tokens' => 0,
    'validate_url' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Website',
      'weight' => '-2',
      'description' => 'Website address',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_year
  $fields['directory-field_year'] = array(
    'field_name' => 'field_year',
    'type_name' => 'directory',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => 'group_info',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '2010
2011
2012
2013
2014
2015',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '2012',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Year',
      'weight' => '-4',
      'description' => 'The year this ad appeared in the Kaslo Visitor Guide',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Email');
  t('Hours');
  t('KVG Ad');
  t('Optional Image');
  t('Phone');
  t('Referrers');
  t('Section');
  t('Website');
  t('Year');

  return $fields;
}
