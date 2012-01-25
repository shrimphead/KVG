<?php
// $Id: comment.tpl.php,v 1.1.2.2 2010/10/20 13:49:43 shannonlucas Exp $
/**
 * @file
 * Comment rendering for Nitobe.
 *
 * In addition to the standard variables Drupal makes available to
 * comment.tpl.php, the follow additional variables are available:
 * - nitobe_author_date: The formatted author link and date for the comment's
 *   meta data area.
 * - nitobe_comment_class: The CSS classes to apply to this comment.
 * - nitobe_comment_links: The comment links with a delimiter added.
 */
?>
<div class="<?php print $nitobe_comment_class; ?>">
  <div class="content clear-block">
    <?php if (!empty($picture)) { print $picture; } ?>
    <?php if ($comment->new): ?>
      <span class="new"><?php print drupal_ucfirst($new); ?></span>
    <?php endif; ?>
    <?php if (!empty($title)) { ?><h3><?php print $title ?></h3><?php } ?>
    <?php print $content ?>
    <hr/>
    <?php if ($signature): ?>
      <div class="user-signature clear-block">
        <?php print $signature ?>
      </div>
    <?php endif; ?>
  </div>
  <div class="comment-meta">
    <span class="author-date"><?php print $nitobe_author_date; ?></span>
    <?php if ($nitobe_comment_links) { print $nitobe_comment_links; } ?>
  </div>
</div>