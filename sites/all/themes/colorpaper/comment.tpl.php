<div id="comment-<?php print $comment->cid ?>" class="comment<?php print ($comment->new) ? ' comment-new' : ''; print ' '. $status ?> <?php print $zebra ?> clear-block">
  <div class="author">
    <?php print $picture ?>
    <div class="name"><?php print $author ?></div>
    <div class="submitted"><?php print format_date($comment->timestamp, 'custom', 'D, j F, Y - H:i'); ?></div>
  </div>

  <div class="content">
    <?php print $content ?>
    <?php if ($signature): ?>
      <div class="user-signature clear-block">
        <?php print $signature ?>
      </div>
    <?php endif; ?>
  </div>

  <div class="control-links clear-block">
    <?php print $links ?>
  </div>
</div>
