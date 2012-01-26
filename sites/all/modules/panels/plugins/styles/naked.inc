<?php
<<<<<<< HEAD
=======
// $Id: naked.inc,v 1.1.2.3 2010/07/13 23:55:58 merlinofchaos Exp $
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5

/**
 * @file
 * Definition of the 'naked' panel style.
 */

// Plugin definition
$plugin = array(
  'title' => t('No markup at all'),
  'description' => t('Display the pane with no markup, not even a title.'),
  'render pane' => 'panels_naked_style_render_pane',
  'weight' => -5,
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_panels_naked_style_render_pane($content, $pane, $display) {
  return $content->content;
}

