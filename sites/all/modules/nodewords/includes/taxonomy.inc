<?php
<<<<<<< HEAD
// $Id$
=======
// $Id: taxonomy.inc,v 1.1.4.7 2009/12/30 18:00:51 kiam Exp $
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5

/**
 * @file
 * Integration file for taxonomy.module.
 */

/**
 * @addtogroup nodewords
 * @{
 */

/**
 * Implements hook_nodewords_type_id().
 */
<<<<<<< HEAD
function taxonomy_nodewords_type_id(&$result, $arg) {
=======
function taxonomy_nodewords_type_id($arg) {
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5
  if ($arg[0] == 'taxonomy') {
    // Taxonomy paths: taxonomy/term/$tid , taxonomy/term/$tid1+$tid2.
    if (isset($arg[1]) && isset($arg[2]) && $arg[1] == 'term') {
      $ids = preg_split('![+, ]!', $arg[2]);

      if (count($ids)) {
<<<<<<< HEAD
        // Take the first ID that is numeric.
        foreach ($ids as $id) {
          if (is_numeric($id)) {
            $result['type'] = NODEWORDS_TYPE_TERM;
            $result['id'] = $id;
            return;
          }
        }
=======
        // Verify that $ids contains all numeric values.
        foreach ($ids as $id) {
          if (!is_numeric($id)) {
            return array(NODEWORDS_TYPE_NONE, 0);
          }
        }

        return array(NODEWORDS_TYPE_TERM, $ids);
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5
      }
    }
  }
}

/**
 * @} End of "addtogroup nodewords".
 */
