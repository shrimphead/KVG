<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function kvg_directory_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_contact
  $groups['directory-group_contact'] = array(
    'group_type' => 'standard',
    'type_name' => 'directory',
    'group_name' => 'group_contact',
    'label' => 'Contact',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-6',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
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
    'weight' => '-5',
    'fields' => array(
      '0' => 'field_hours',
      '1' => 'field_phone',
      '2' => 'field_website',
      '3' => 'field_email',
    ),
  );

  // Exported group: group_info
  $groups['directory-group_info'] = array(
    'group_type' => 'standard',
    'type_name' => 'directory',
    'group_name' => 'group_info',
    'label' => 'Information',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-7',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
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
    'weight' => '-6',
    'fields' => array(
      '0' => 'field_section',
      '1' => 'field_year',
      '2' => 'field_kvg_ad',
      '3' => 'field_image',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  t('Information');

  return $groups;
}
