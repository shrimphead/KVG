<?php
<<<<<<< HEAD
=======
// $Id: region-plain-box.tpl.php,v 1.1.2.1 2010/07/13 23:55:58 merlinofchaos Exp $
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5
/**
 * @file
 *
 * Display the box for rounded corners.
 *
 * - $content: The content of the box.
 * - $classes: The classes that must be applied to the top divs.
 */
?>
<div class="rounded-shadow <?php print $classes ?>">
  <div class="rounded-shadow-background">
    <div class="rounded-shadow-wrap-corner">
      <div class="rounded-shadow-top-edge">
        <div class="rounded-shadow-left"></div>
        <div class="rounded-shadow-right"></div>
      </div>
      <div class="rounded-shadow-left-edge">
        <div class="rounded-shadow-right-edge clear-block">
          <?php print $content; ?>
        </div>
      </div>
      <div class="rounded-shadow-bottom-edge">
      <div class="rounded-shadow-left"></div><div class="rounded-shadow-right"></div>
      </div>
    </div>
  </div>
</div>
