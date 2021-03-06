<?php
// $Id: node.tpl.php,v 1.4.2.1 2009/08/10 10:48:33 goba Exp $

/**
 * @file node.tpl.php
 *
 * Theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: Node body or teaser depending on $teaser flag.
 * - $picture: The authors picture of the node output from
 *   theme_user_picture().
 * - $date: Formatted creation date (use $created to reformat with
 *   format_date()).
 * - $links: Themed links like "Read more", "Add new comment", etc. output
 *   from theme_links().
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $submitted: themed submission information output from
 *   theme_node_submitted().
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $teaser: Flag for the teaser state.
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 */
?>
<?php if($teaser): ////////////// TEASER  ?>
  <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  <?php print $teaser_short_body; ?>
  <span class="teaser-links clear-block"> 
    <?php print $links; ?> 
  </span>


<?php else: ////////// FULL NODE ?>


<div class="meta">
  <div class="section sections-inline">View Similar: <?php print $field_sections_rendered ?></div>
  <?php if ($terms): ?>
    <div class="terms terms-inline"><?php print $terms ?></div>
  <?php endif;?>
</div>

<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block">
<?php if (!$page): ?>
<?php endif; ?>

  <div class="content grid-12 alpha omega">

    <div class="directory-image grid-5 alpha">
      <?php if ($ad_status_display): ?>
       <?php print $ad_status_display; ?>
      <?php endif; ?>
      <?php if ($field_kvg_ad_rendered): ?>
        <?php print $field_kvg_ad_rendered; ?>
      <?php endif; ?>
      <?php if ($optional_image): ?>
        <div class="image-optional"><?php print $optional_image; ?></div>
      <?php endif; ?>
      <?php if($field_referrers_rendered): ?>
        <div class="directory-referrers">
          <h3 class="node-referrer-title">Related Articles</h3>
          <?php print $field_referrers_rendered; ?></div>
      <?php endif ?>
      <?php if ($feedback): ?>
        <div id='feedback-block'>
          <?php print $feedback; ?>
        </div>
        <? endif; ?>
    </div>

    <div class="directory-body grid-7 omega">

      <?php print $body_rendered; ?>
      <div class="directory-contact-info grid-6 alpha omega">
        <h3 class="directory-contact-header">Contact Information</h3>
        <?php print $field_phone_rendered; ?>
        <?php print $field_website_rendered; ?>
        <?php print $field_email_rendered; ?>
        <?php if($address) : ?>
          <div class="directory-address"><span class="address-title">Address:</span>
          <?php print $address; ?></div>
        <?php endif; ?>
      </div>


    </div>
    <?php if ($map): ?>
      <div class="map node-directory-map grid-12 alpha omega"><?php print $map; ?></div>
    <?php endif; ?>
    

  </div>

  <?php print $links; ?>


</div>


<? endif; ?>