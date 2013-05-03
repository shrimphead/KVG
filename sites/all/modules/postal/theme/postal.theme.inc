<?php

/**
 * Implementation of hook_theme().
 */
function postal_theme_theme() {
  $path = drupal_get_path('module', 'postal') .'/theme';
  return array(
    'postal' => array(
      'arguments' => array('element' => NULL),
      'file' => 'postal.theme.inc',
      'path' => $path,
    ),
    'postal_general' => array(
      'arguments' => array('element' => NULL),
      'file' => 'postal.theme.inc',
      'path' => $path,
    ),
    'postal_address' => array(
      'arguments' => array('address' => NULL),
      'template' => 'postal-address',
      'file' => 'postal.theme.inc',
      'path' => $path,
    ),
    'postal_country' => array(
      'arguments' => array('address' => NULL),
      'file' => 'postal.theme.inc',
      'path' => $path,
    ),
    'postal_city' => array(
      'arguments' => array('address' => NULL),
      'file' => 'postal.theme.inc',
      'path' => $path,
    ),
    'postal_state' => array(
      'arguments' => array('address' => NULL),
      'file' => 'postal.theme.inc',
      'path' => $path,
    ),
    'postal_zip' => array(
      'arguments' => array('address' => NULL),
      'file' => 'postal.theme.inc',
      'path' => $path,
    ),
  );
}

function theme_postal($element) {
  drupal_add_css(drupal_get_path('module', 'postal') . '/postal.css', all);
  return theme('form_element', $element, $element['#children']);
}

function theme_postal_general($element) {
  return theme('form_element', $element, $element['#children']);
}

function template_preprocess_postal_address(&$vars) {
  // Cleanup postal object. 
  $vars['address'] = postal_address($vars['address']);

  // Clone the postal object to preserve raw values.
  $address_raw = clone $vars['address'];
  
  // Set the country and state to name values.
  $address = postal_set_names($vars['address']);
  $vars['name'] = $address->name;
  $vars['street_address'] = $address->street1;
  $vars['extended_address'] = $address->street2;
  $vars['city'] = $address->city;
  $vars['state'] = $address->state;
  $vars['zip'] = $address->zip;
  $vars['country'] = $address->country;

  // Allow for per-country template overrides.
  // @TODO: Add country and state selectors ala the component widget.
  //  Till that is done this won't actually work.
  $vars['template_files'][] = 'postal-address-' . $address_raw->country;
}

function theme_postal_country($address) {
  $address = postal_set_names(postal_address($address));
  return $address->country;
}

function theme_postal_state($address) {
  $address = postal_set_names(postal_address($address));
  return $address->state;
}

function theme_postal_city($address) {
  $address = postal_address($address);
  return $address->city;
}

function theme_postal_zip($address) {
  $address = postal_address($address);
  return $address->zip;
}
