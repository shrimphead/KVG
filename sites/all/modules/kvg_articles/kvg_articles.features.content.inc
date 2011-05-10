<?php

/**
 * Implementation of hook_content_default_fields().
 */
function kvg_articles_content_default_fields() {
  $fields = array();

  // Exported field: field_directory_reference
  $fields['article-field_directory_reference'] = array(
    'field_name' => 'field_directory_reference',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '2',
      'parent' => 'group_ad_relations',
      '2' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
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
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'directory' => 'directory',
      'visitor_guide_pages' => 0,
      'webform' => 0,
      'article' => 'article',
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

  // Exported field: field_image_horizontal
  $fields['article-field_image_horizontal'] = array(
    'field_name' => 'field_image_horizontal',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '15',
      'parent' => 'group_images',
      '2' => array(
        'format' => 'result_image_scale_default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'result_image_scale_default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'admin_thumbnail_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__article_horizontal__original',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'article_page_box_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
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
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'images/articles',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '3mB',
      'max_filesize_per_node' => '5mB',
      'max_resolution' => '2000x2000',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'imagecrop' => 0,
      'imagecrop_presets' => array(
        'front_page_lead_article' => 0,
        'front_page_small_articles' => 0,
      ),
      'filefield_sources' => array(
        'reference' => 'reference',
        'attach' => 'attach',
        'imce' => 0,
        'remote' => 0,
      ),
      'filefield_source_autocomplete' => '1',
      'filefield_source_attach_path' => 'images/articles',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'label' => 'Image Horizontal',
      'weight' => '15',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_image_vertical
  $fields['article-field_image_vertical'] = array(
    'field_name' => 'field_image_vertical',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '16',
      'parent' => 'group_images',
      '2' => array(
        'format' => 'result_image_scale_default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'result_image_scale_default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'admin_thumbnail_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__article_vertical__original',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'article_page_box_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
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
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'images/articles',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '3mB',
      'max_filesize_per_node' => '5mB',
      'max_resolution' => '2000x2000',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'imagecrop' => 0,
      'imagecrop_presets' => array(
        'front_page_lead_article' => 0,
        'front_page_small_articles' => 0,
      ),
      'filefield_sources' => array(
        'reference' => 'reference',
        'attach' => 'attach',
        'imce' => 0,
        'remote' => 0,
      ),
      'filefield_source_autocomplete' => '1',
      'filefield_source_attach_path' => 'images/articles',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'label' => 'Image Vertical',
      'weight' => '16',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image Horizontal');
  t('Image Vertical');
  t('Related Businesses');

  return $fields;
}
