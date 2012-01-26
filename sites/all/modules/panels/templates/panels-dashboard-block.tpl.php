<?php
<<<<<<< HEAD
=======
// $Id: panels-dashboard-block.tpl.php,v 1.1.2.1 2010/07/23 21:49:03 merlinofchaos Exp $
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5
?>
<div class="dashboard-block">
  <h3 class="dashboard-title"><?php print $block['title']; ?></h3>
  <div class="dashboard-content <?php print $block['class']; ?>">
    <?php print $block['content']; ?>
    <?php if (!empty($block['link'])): ?>
      <div class="links">
        <?php print $block['link']; ?>
      </div>
    <?php endif; ?>
  </div>
</div>
