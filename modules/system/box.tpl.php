<?php
<<<<<<< HEAD
=======
// $Id: box.tpl.php,v 1.3 2007/12/16 21:01:45 goba Exp $
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5

/**
 * @file box.tpl.php
 *
 * Theme implementation to display a box.
 *
 * Available variables:
 * - $title: Box title.
 * - $content: Box content.
 *
 * @see template_preprocess()
 */
?>
<div class="box">

<?php if ($title): ?>
  <h2><?php print $title ?></h2>
<?php endif; ?>

  <div class="content"><?php print $content ?></div>
</div>
