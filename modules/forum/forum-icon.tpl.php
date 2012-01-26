<?php
<<<<<<< HEAD
=======
// $Id: forum-icon.tpl.php,v 1.3 2007/12/20 09:35:09 goba Exp $
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5

/**
 * @file forum-icon.tpl.php
 * Display an appropriate icon for a forum post.
 *
 * Available variables:
 * - $new_posts: Indicates whether or not the topic contains new posts.
 * - $icon: The icon to display. May be one of 'hot', 'hot-new', 'new',
 *   'default', 'closed', or 'sticky'.
 *
 * @see template_preprocess_forum_icon()
 * @see theme_forum_icon()
 */
?>
<?php if ($new_posts): ?>
  <a name="new">
<?php endif; ?>

<?php print theme('image', "misc/forum-$icon.png") ?>

<?php if ($new_posts): ?>
  </a>
<?php endif; ?>
