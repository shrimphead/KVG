 <div class="<?php if ($page): ?>typepage<?php endif; ?> <?php if ($page == 0): ?>typeteaser<?php endif; ?>">
 
  <div class="node<?php if ($sticky) { print " sticky"; } ?><?php if (!$status) { print " node-unpublished"; } ?>">
    <?php if ($picture) {
      print $picture;
    }?>
    <?php if ($page == 0) { ?><h2 class="title"><a href="<?php print $node_url?>"><?php print $title?></a></h2><?php }; ?>
    <div class="submitted">  <?php if ($submitted): ?><?php print $date?> by <?php print $name ?> <?php endif; ?>&nbsp; <?php if ($terms): ?> <strong style="color: #30424e">Tags:</strong><?php print $terms?><?php endif; ?> </div>
    <div class="taxonomy"></div>
    <div class="content"><?php print $content?></div>
    <?php if ($links) { ?><div class="links-readmore">&raquo;<?php print $links?></div><?php }; ?>
  </div>
</div>