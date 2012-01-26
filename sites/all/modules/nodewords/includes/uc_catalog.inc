<?php
<<<<<<< HEAD
// $Id$
=======
// $Id: uc_catalog.inc,v 1.1.2.3 2009/12/29 08:35:13 kiam Exp $
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5

/**
 * @file
 * Integration file for uc_catalog.module.
 */

/**
 * @addtogroup nodewords
 * @{
 */

/**
 * Implements hook_nodewords_type_id().
 */
<<<<<<< HEAD
function uc_catalog_nodewords_type_id(&$result, $arg) {
  if ($arg[0] == 'catalog') {
    if (isset($arg[1]) && is_numeric($arg[1])) {
      $result['type'] = NODEWORDS_TYPE_TERM;
      $result['id'] = $arg[1];
=======
function uc_catalog_nodewords_type_id($arg) {
  if ($arg[0] == 'catalog') {
    if (isset($arg[1]) && is_numeric($arg[1])) {
      return array(NODEWORDS_TYPE_TERM, array($arg[1]));
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5
    }
  }
}

/**
 * @} End of "addtogroup nodewords".
<<<<<<< HEAD
 */
=======
 */
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5
