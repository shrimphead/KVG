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
<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block">
<?php #print $picture ?>

<?php if (!$page): ?>
  <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>

  <div class="content grid-12 alpha">
    <?php if ($hor_image && !$vert_image): // if HORZ only?>
      <div class="image horizontal-image alpha omega">
        <?php print $hor_image; ?>
      </div>
      <div class="article-body grid-10 alpha ">
        <?php if ($map): ?>
          <div class="article-map"><?php print $map ?></div>
        <?php endif; ?>
        <?php print $body; ?>
      </div>
    <?php endif; ?>

    <?php if ($hor_image && $vert_image): // if both VERT and HORZ ?>
      <div class="image horizontal-image grid-12 alpha omega">
        <?php print $hor_image; ?>
      </div>
    <?php endif; ?>

    <?php if ($vert_image): // if VERT ?>
        <div class="article-body grid-6 alpha ">
          <?php print $body; ?>
        </div>
        <div class="image vertical-image grid-6 omega">
          <?php print $vert_image; ?>
          <?php print $map ?>
        </div>
    <?php endif; ?>

    <?php if ($field_directory_reference_rendered) : ?>
      <div class="grid-12 alpha omega referenced-header">
        You might also like:
      </div>

      <div class="grid-12 articles-referenced">
        <?php print $field_directory_reference_rendered; ?>
      </div>
    <?php endif; ?>
  </div>

  <?php print $links; ?>
</div>