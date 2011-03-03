<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function kvg_articles_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_ad_relations
  $groups['article-group_ad_relations'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_ad_relations',
    'label' => 'Related Nodes',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => 'Select ads or other articles related to this article. They will appear as link at the bottom of the article.',
      ),
      'display' => array(
        'weight' => '11',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '11',
    'fields' => array(
      '0' => 'field_directory_reference',
    ),
  );

  // Exported group: group_images
  $groups['article-group_images'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_images',
    'label' => 'Images',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-2',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_image_horizontal',
      '1' => 'field_image_vertical',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');
  t('Related Nodes');

  return $groups;
}
