<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function kvg_articles_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_ad_relations
  $groups['page-group_ad_relations'] = array(
    'group_type' => 'standard',
    'type_name' => 'page',
    'group_name' => 'group_ad_relations',
    'label' => 'Related Ads',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => 'Select ads related to this article. The related ad will appear at the bottom of the article.',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
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
        'label' => 'above',
      ),
    ),
    'weight' => '10',
    'fields' => array(
      '0' => 'field_directory_reference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Related Ads');

  return $groups;
}
