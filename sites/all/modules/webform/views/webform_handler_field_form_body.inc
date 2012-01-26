<?php

/**
 * @file
 * Views handler to display the content of a webform form.
 */

/**
 * Field handler to present the Webform form body to the user.
 */
class webform_handler_field_form_body extends views_handler_field {
  function construct() {
    parent::construct();
    $this->additional_fields['nid'] = 'nid';
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['label'] = array('default' => 'Form', 'translatable' => TRUE);
    return $options;
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
    $node = node_load($values->{$this->aliases['nid']});

    if (node_access('view', $node)) {
<<<<<<< HEAD
      // Populate $node->content['webform'] by reference.
      webform_node_view($node, FALSE, FALSE);
      $form_body = isset($node->content['webform']['#value']) ? $node->content['webform']['#value'] : NULL;
=======
      $form_body = node_view($node, FALSE, FALSE);
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5
    }
    else {
      return;
    }

    return $form_body;
  }
}
