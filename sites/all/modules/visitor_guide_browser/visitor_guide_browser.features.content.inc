<?php

/**
 * Implementation of hook_content_default_fields().
 */
function visitor_guide_browser_content_default_fields() {
  $fields = array();

  // Exported field: field_image
  $fields['visitor_guide_pages-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'visitor_guide_pages',
    'display_settings' => array(
      'weight' => '-8',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'imagefield__lightbox2__image_logo__original',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__image_logo__original',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'visitor_guide_pages',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '3MB',
      'max_filesize_per_node' => '5MB',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_box' => 0,
        'imagecache_image_horizontal' => 0,
        'imagecache_image_logo' => 0,
        'imagecache_image_vertical' => 0,
        'lightbox2--box--box' => 0,
        'lightbox2--box--image_horizontal' => 0,
        'lightbox2--box--image_logo' => 0,
        'lightbox2--box--image_vertical' => 0,
        'lightbox2--box--original' => 0,
        'lightbox2--image_horizontal--box' => 0,
        'lightbox2--image_horizontal--image_horizontal' => 0,
        'lightbox2--image_horizontal--image_logo' => 0,
        'lightbox2--image_horizontal--image_vertical' => 0,
        'lightbox2--image_horizontal--original' => 0,
        'lightbox2--image_logo--box' => 0,
        'lightbox2--image_logo--image_horizontal' => 0,
        'lightbox2--image_logo--image_logo' => 0,
        'lightbox2--image_logo--image_vertical' => 0,
        'lightbox2--image_logo--original' => 0,
        'lightbox2--image_vertical--box' => 0,
        'lightbox2--image_vertical--image_horizontal' => 0,
        'lightbox2--image_vertical--image_logo' => 0,
        'lightbox2--image_vertical--image_vertical' => 0,
        'lightbox2--image_vertical--original' => 0,
        'lightbox2--link--box' => 0,
        'lightbox2--link--image_horizontal' => 0,
        'lightbox2--link--image_logo' => 0,
        'lightbox2--link--image_vertical' => 0,
        'lightbox2--original--box' => 0,
        'lightbox2--original--image_horizontal' => 0,
        'lightbox2--original--image_logo' => 0,
        'lightbox2--original--image_vertical' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '650',
      'label' => 'Image',
      'weight' => '-4',
      'description' => 'Upload visitor guide page',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_year
  $fields['visitor_guide_pages-field_year'] = array(
    'field_name' => 'field_year',
    'type_name' => 'visitor_guide_pages',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
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
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '2011
2012
2013
2014',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Year',
      'weight' => '-3',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');
  t('Year');

  return $fields;
}
