<?php
<<<<<<< HEAD
=======
// $Id: cache-install.inc,v 1.2 2007/08/07 08:39:35 goba Exp $
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5

/**
 * A stub cache implementation to be used during the installation
 * process when database access is not yet available. Because Drupal's
 * caching system never requires that cached data be present, these
 * stub functions can short-circuit the process and sidestep the
 * need for any persistent storage. Obviously, using this cache
 * implementation during normal operations would have a negative impact
 * on performance.
 */

function cache_get($key, $table = 'cache') {
  return FALSE;
}

function cache_set($cid, $data, $table = 'cache', $expire = CACHE_PERMANENT, $headers = NULL) {
  return;
}

function cache_clear_all($cid = NULL, $table = NULL, $wildcard = FALSE) {
  return;
}
