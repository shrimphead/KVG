<?php
// $Id: block.tpl.php,v 1.1.2.2 2010/10/20 13:49:43 shannonlucas Exp $
/**
 * @file
 * Block rendering for Nitobe.
 *
 * In addition to the standard variables Drupal makes available to node.tpl.php,
 * these variables are made available by the theme:
 * - $nitobe_block_id: A complete unique ID for the block.
 * - $nitobe_block_class: The CSS classes to apply to the block. If the
 *   Block Class module is installed, those classes will be added to these.
 */
?>
<div id="<?php print $nitobe_block_id; ?>" class="<?php print $nitobe_block_class; ?>">
  <?php if (!empty($block->subject)): ?>
  	<h2><?php print $block->subject ?></h2>
  <?php endif;?>
  <?php print $block->content ?>
</div><!-- /<?php print $nitobe_block_id; ?> -->
<hr class="break"/>