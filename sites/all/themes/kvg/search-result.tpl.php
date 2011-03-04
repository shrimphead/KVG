<div class='search-results grid-12 alpha omega'> 
  <div class='search-title grid-6 prefix-4 alpha omega'><h3> <?php print $search_title; ?> </h3></div>
  <div class='search-image grid-4 alpha'> <?php print $search_image; ?> </div>
  <div class='search-snippet grid-6'><?php print $search_body; ?></div>
  <div class='search-link grid-2'> <?php print $search_link; ?> </div>
  <?php if($logged_in): ?>
    <div class='search-edit grid-2'> <?php print $search_edit_link; ?> </div>
  <?php endif; ?>
</div>
