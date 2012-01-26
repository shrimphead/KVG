<?php
<<<<<<< HEAD
// $Id$
=======
// $Id: node.inc,v 1.1.4.8 2009/12/30 18:00:51 kiam Exp $
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5

/**
 * @file
 * Integration file for node.module.
 */

/**
 * @addtogroup nodewords
 * @{
 */

/**
 * Implements hook_nodewords_type_id().
 */
<<<<<<< HEAD
function node_nodewords_type_id(&$result, $arg) {
  if ($arg[0] == 'node') {
    // Node paths: node/$nid.
    if (isset($arg[1]) && is_numeric($arg[1]) && ($node = menu_get_object())) {
=======
function node_nodewords_type_id($arg) {
  if ($arg[0] == 'node') {
    // Node paths: node/$nid.
    if (isset($arg[1]) && is_numeric($arg[1])) {
      if (!($node = menu_get_object())) {
        return array(NODEWORDS_TYPE_NONE, 0);
      }
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5

      $bool = (
        (
          $node->type == 'poll' &&
          isset($arg[2]) &&
          in_array($arg[2], array('edit', 'results'))
        ) ||
        !isset($arg[2])
      );

      if ($bool) {
<<<<<<< HEAD
        $result['type'] = NODEWORDS_TYPE_NODE;
        $result['id'] = $node->nid;
=======
        return array(NODEWORDS_TYPE_NODE, array($node->nid));
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5
      }
    }
  }
}

/**
 * @} End of "addtogroup nodewords".
 */
