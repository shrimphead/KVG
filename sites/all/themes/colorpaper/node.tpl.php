<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> <?php if ($page) { print ' page'; } ?> clear-block">
  <?php if ($submitted): ?>
    <div class="date">
      <div class="month"><?php print format_date($created, 'custom', 'M'); ?></div>
      <div class="day"><?php print format_date($created, 'custom', 'j'); ?></div>
    </div>
  <?php endif; ?>

  <div class="content">
    <?php if (!$page): ?>
      <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
    <?php endif; ?>

    <?php if ($submitted): ?>
      <div class="submitted"><?php print $submitted ?></div>
    <?php endif; ?>

    <?php print $content ?>
  </div>

  <?php if (!empty($terms) || !empty($links)): ?>
    <div class="control-links clear-block">
      <?php if ($page && $terms): ?>
        <div class="terms">
          <?php print $terms ?>
        </div>
      <?php endif; ?>

      <?php if ($teaser && $readmore): ?>
        <div class="node_button_read_more"><a href="<?php print $node_url ?>" title="<?php print t('Read the rest of') . ' ' . $title; ?>."><?php print t('Read more'); ?></a></div>
      <?php endif; ?>

      <?php print $links; ?>
    </div>
  <?php endif; ?>
</div>
