<?php
<<<<<<< HEAD
// $Id$
=======
// $Id: user.inc,v 1.1.4.6 2009/12/30 18:00:51 kiam Exp $
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5

/**
 * @file
 * Integration file for user.module.
 */

/**
 * @addtogroup nodewords
 * @{
 */

/**
 * Implements hook_nodewords_type_id().
 */
<<<<<<< HEAD
function user_nodewords_type_id(&$result, $arg) {
  if ($arg[0] == 'user') {
    // User page paths: user/$uid.
    if (isset($arg[1]) && is_numeric($arg[1])) {
      $result['type'] = NODEWORDS_TYPE_USER;
      $result['id'] = $arg[1];
=======
function user_nodewords_type_id($arg) {
  if ($arg[0] == 'user') {
    // User page paths: user/$uid.
    if (isset($arg[1]) && is_numeric($arg[1])) {
      if (isset($arg[2]) && $arg[2] == 'track') {
        return array(NODEWORDS_TYPE_TRACKER, array(0));
      }

      return array(NODEWORDS_TYPE_USER, array($arg[1]));
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5
    }
  }
}

/**
 * @} End of "addtogroup nodewords".
 */
