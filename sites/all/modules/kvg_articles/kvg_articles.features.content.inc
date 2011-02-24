<?php

/**
 * Implementation of hook_content_default_fields().
 */
function kvg_articles_content_default_fields() {
  $fields = array();

  // Exported field: field_directory_reference
  $fields['page-field_directory_reference'] = array(
    'field_name' => 'field_directory_reference',
    'type_name' => 'page',
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
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'page' => 'page',
      'directory' => 'directory',
      'visitor_guide_pages' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_directory_reference][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Related Businesses',
      'weight' => '2',
      'description' => 'Select any business listing related to this article.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_image
  $fields['page-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'page',
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
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'images/articles',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '3MB',
      'max_filesize_per_node' => '5MB',
      'max_resolution' => '2000x2000',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
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
      'imagecrop' => 0,
      'imagecrop_presets' => array(
        'article_vertical' => 0,
        'image_horizontal' => 0,
        'article_horizontal' => 0,
        'front_page_lead_article' => 0,
        'front_page_small_articles' => 0,
      ),
      'label' => 'Images',
      'weight' => '-2',
      'description' => 'Upload images. <em>NOTE: Horizontal images should be uploaded first - if any.</em>',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');
  t('Related Businesses');

  return $fields;
}
