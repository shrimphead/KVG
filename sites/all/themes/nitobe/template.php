<?php
// $Id: template.php,v 1.21.2.7 2010/10/23 22:01:33 shannonlucas Exp $
/**
 * @file
 * The core functions for the Nitobe theme.
 */

require_once nitobe_theme_path() . '/nitobe_utils.inc';
require_once nitobe_theme_path() . '/nitobe_960.inc';

/**
 * Returns the path to the main Nitobe theme directory.
 *
 * @return string
 *   The path to Nitobe.
 */
function nitobe_theme_path() {
  static $theme_path;

  if (!isset($theme_path)) {
    global $theme;
    if ($theme == 'nitobe') {
      $theme_path = path_to_theme();
    } else {
      $theme_path = drupal_get_path('theme', 'nitobe');
    }
  }

  return $theme_path;
}


/**
 * Implements hook_theme() and registers Nitobe's theme functions.
 *
 * @param array $existing
 *   Existing implementations that may be used as a base for override
 *   purposes.
 * @param string $type
 *   What 'type' is being processed. May be one of: module, base_theme_engine,
 *   theme_engine, base_theme, theme
 * @param string $theme
 *   The actual name of theme that is being being checked.
 * @param string $path
 *   The directory path of the theme or module, so that it doesn't need to be
 *   looked up.
 *
 * @return array
 *   The theme registry entries for Nitobe.
 */
function nitobe_theme($existing, $type, $theme, $path) {
  $funcs = array(
    'nitobe_username' => array(
      'arguments' => $existing['theme_username'],
    ),
    'nitobe_preprocess_block' => array(
      'arguments' => $existing['phptemplate_preprocess_block'],
    ),
    'nitobe_preprocess_page' => array(
      'arguments' => $existing['phptemplate_preprocess_page'],
    ),
    'nitobe_preprocess_maintenance_page' => array(
      'arguments' => $existing['phptemplate_preprocess_maintenance_page'],
    ),
    'nitobe_pager' => array(
      'arguments' => $existing['theme_pager'],
    ),
    'nitobe_preprocess_comment' => array(
      'arguments' => $existing['phptemplate_preprocess_comment'],
    ),
    'nitobe_preprocess_node' => array(
      'arguments' => $existing['phptemplate_preprocess_page'],
    ),
    'nitobe_preprocess_user_picture' => array(
      'arguments' => $existing['phptemplate_preprocess_user_picture'],
    ),
  );

  nitobe_settings_init($theme);

  return $funcs;
}


/**
 * Overrides theme_pager() and alters the default quantity of pager items.
 *
 * @param array $tags
 *   Labels for the controls in the pager.
 * @param int $limit
 *   The number of query results to display per page.
 * @param int $element
 *   An optional ID to distinguish between multiple pagers on one page.
 * @param array $parameters
 *   An mapping of query string parameters to append to the pager links.
 * @param int $quantity
 *   The number of page items to show in the pager. If this value is zero (0),
 *   the item count specified by the theme setting nitobe_pager_page_count will
 *   be used (5 if not set).
 *
 * @return string
 *   The HTML that generates the query pager.
 */
function nitobe_pager($tags = array(), $limit = 10, $element = 0,
                      $parameters = array(), $quantity = 0) {
  if ($quantity == 0) {
    $quantity = theme_get_setting('nitobe_pager_page_count', 5);
    $quantity = empty($quantity) ? 5 : $quantity;
  }

  return theme_pager($tags, $limit, $element, $parameters, $quantity);
}


/**
 * Decorates theme_username() to strip the " (not verified)" string from the
 * commenter's name.
 *
 * @param object $account
 *   An instance of a user object.
 *
 * @return string
 *   The altered HTML output from theme_username().
 */
function nitobe_username($account) {
  $output = theme_username($account);

  if ((boolean)theme_get_setting('nitobe_remove_not_verified')) {
    $to_strip = ' ('. t('not verified') .')';
    $output   = str_replace($to_strip, '', $output);
  }

  return $output;
}


/**
 * Preprocesses the user picture.
 *
 * If no default user picture is provided, and pictures are enabled, use the
 * theme's default user picture.
 *
 * @param array &$vars
 *   The template arguments.
 */
function nitobe_preprocess_user_picture(&$vars) {
  if (empty($vars['picture']) && (variable_get('user_pictures', 0) != 0)) {
    $picture = nitobe_theme_path() . '/images/user-icon.jpg';
    $name    = $account->name ? $account->name : variable_get('anonymous', t('Anonymous'));
    $alt     = t("@user's picture", array('@user' => $name));

    $vars['picture'] = theme('image', $picture, $alt, $alt, NULL, FALSE);

    // -- Link the picture if allowed.
    if (!empty($account->uid) && user_access('access user profiles')) {
      $attributes = array(
        'attributes' => array(
      	  'title' => t('View user profile.'),
        ),
      	'html' => TRUE
      );

      $vars['picture'] = l($vars['picture'], "user/$account->uid", $attributes);
    }
  }
}


/**
 * Determines whether to show the date stamp for the given node.
 *
 * @param string $type
 *   The machine readable name of the type to check.
 *
 * @return boolean
 *   TRUE if the node is of a type that should show the date stamp, FALSE if
 *   not.
 */
function nitobe_show_datestamp($type) {
  $default     = drupal_map_assoc(array('blog', 'forum', 'poll', 'story'));
  $type_show   = theme_get_setting('toggle_node_info_' . $type);
  $valid_types = theme_get_setting('nitobe_show_datestamp');
  $valid_types = (!empty($valid_types)) ? $valid_types : $default;

  return (($type_show != FALSE) && array_key_exists($type, $valid_types) &&
          ($valid_types[$type] === $type));
}


/**
 * Produces the title effect.
 *
 * Removes the spaces between words in the given string and returns an HTML
 * string with every other word wrapped in a span with the class "alt-color".
 *
 * @param string $title
 *   The text to render.
 *
 * @return string
 *   The rendered HTML.
 */
function nitobe_title_effect($title = '') {
  $words  = explode(' ', $title);
  $result = '';

  if (is_array($words)) {
    $alt = FALSE;
    foreach ($words as $word) {
      if ($alt) {
        $result .= '<span class="alt-color">' . $word . '</span>';
      } else {
        $result .= $word;
      }

      $alt = !$alt;
    }
  }

  return $result;
}


/**
 * Adds a prefix to the terms list and inserts a separator between them.
 *
 * @param string $terms
 *   The pre-rendered HTML containing the term list elements.
 * @param string $prefix
 *   The text to show before the list of terms. By default the output of
 *   t('Tags: ') is used.
 * @param string $separator
 *   The character(s) to place between the terms. By default, the output of
 *   t(', ') is used.
 *
 * @return string
 *   The modified HTML.
 */
function nitobe_separate_terms($terms, $prefix = NULL, $separator = NULL) {
  $prefix    = ($prefix === NULL) ? t('Tags: ') : $prefix;
  $separator = ($separator === NULL) ? t(', ') : $separator;
  $output    = $prefix . preg_replace('!a></li>\s<li!',
                                      "a>{$separator}</li>\n<li", $terms);
  return $output;
}


/**
 * Inserts a separator between items in the list of links for a node.
 *
 * @param string $links
 *   The pre-rendered HTML string containing the link list elements.
 * @param string $separator
 *   Character(s) to place between the links. By default, the output of
 *   t(' | ') is used.
 *
 * @return The modified HTML.
 */
function nitobe_separate_links($links, $separator = NULL) {
  $separator = ($separator === NULL) ? t(' | ') : $separator;
  $output    = preg_replace('!a></li>\s<li!',
                            "a>{$separator}</li>\n<li", $links);
  return $output;
}


/**
 * Adds the JavaScript and CSS required for the masthead image.
 *
 * @param array &$vars
 *   The page template variables.
 */
function nitobe_add_masthead_image(&$vars) {
  // -- Determine the header image if it is set, or add the JavaScript for
  // -- random header images.
  $header_img = theme_get_setting('nitobe_header_image');
  $header_img = empty($header_img) ? '<random>' : $header_img;

  if ($header_img == '<random>') {
    $vars['closure'] .= _nitobe_random_header_js();

    // -- Add css for a random image for browsers without js enabled. Patch
    // -- supplied by Jonathan Hedstrom (http://drupal.org/user/208732)
    $image = array_rand(_nitobe_get_header_list());
    $vars['styles'] .= _nitobe_fixed_header_css($image) . "\n";
  } else {
    $vars['styles'] .= _nitobe_fixed_header_css($header_img) . "\n";
  }
}


/**
 * Preprocess the blocks.
 *
 * @param array &$vars
 *   The template variables. After invoking this function, these keys will be
 *   added to $vars:
 *   - nitobe_block_id: A complete unique ID for the block.
 *   - nitobe_block_class: The CSS classes to apply to the block. If the
 *     Block Class module is installed, those classes will be added to these.
 */
function nitobe_preprocess_block(&$vars) {
  $block = &$vars['block'];

  $vars['nitobe_block_id']    = 'block-' . $block->module .'-'. $block->delta;
  $vars['nitobe_block_class'] = 'block block-' . $block->module .
                                ' block-' . $block->region;

  // -- Support the Block Class module if present.
  if (isset($vars['block_class'])) {
    $vars['nitobe_block_class'] .= (' ' . $vars['block_class']);
  } elseif (function_exists('block_class')) {
    $vars['nitobe_block_class'] .= (' ' . block_class($block));
  }
}


/**
 * Preprocess the nodes.
 *
 * @param array &$vars
 *   The template variables. After invoking this function, these keys will be
 *   added to $vars:
 *   - nitobe_node_author: The node's "posted by" text and author link.
 *   - nitobe_node_class: The CSS classes to apply to the node.
 *   - nitobe_node_links: The node links with a separator placed between each.
 *   - nitobe_perma_title: The localized permalink text for the node.
 *   - nitobe_node_timestamp: The timestamp for this type, if one should be
 *     rendered for this type.
 *   - nitobe_term_links: The taxonomy links with a separator placed between
 *     each.
 */
function nitobe_preprocess_node(&$vars) {
  $node                       = $vars['node'];
  $vars['nitobe_node_class']  = 'node ' . ($node->sticky ? 'sticky ' : '') .
                                ($node->status ? '' : ' node-unpublished') .
                                ' node-' . $node->type .
                                ($teaser ? ' teaser' : '') . ' clear-block';
  $vars['nitobe_term_links']  = nitobe_separate_terms($vars['terms']);
  $vars['nitobe_node_links']  = nitobe_separate_links($vars['links']);
  $vars['nitobe_perma_title'] = t('Permanent Link to !title',
                                array('!title' => $vars['title']));

  // -- Node authorship.
  if (!empty($vars['submitted'])) {
    $vars['nitobe_node_author'] = t('Posted by !author',
                                    array('!author' => $vars['name']));
  }

  // -- The formatted date for this node, if the date should be rendered.
  $node = $vars['node'];
  if (!empty($node) && isset($node->created) && nitobe_show_datestamp($node->type)) {
    $vars['nitobe_node_timestamp'] = format_date($node->created, 'custom', t('d M Y'));
  }
}


/**
 * Provides page variables for the maintenance page.
 *
 * @param array &$vars
 *   The template variables. After invoking this function, this array will have
 *   the same added values provided by nitobe_preprocess_page().
 *
 * @see nitobe_preprocess_page
 */
function nitobe_preprocess_maintenance_page(&$vars) {
  nitobe_preprocess_page($vars);
}


/**
 * Preprocesses pages.
 *
 * @param array &$vars
 *   The template variables. After invoking this function, these keys will be
 *   added to $vars:
 *   - nitobe_bottom_empty: TRUE if all of the regions in the bottom block area
 *     are empty.
 *   - nitobe_classes: The CSS classes to apply to the content and sidebar
 *     regions. This array will have 'content', 'left', and 'right' as keys.
 *     The values will include the grid size for the region and any push/pull
 *     classes it needs.
 *   - nitobe_logo: The HTML for the linked logo image.
 *   - nitobe_page_title: The pre rendered page title element with the
 *     appropriate CSS classes assigned.
 *   - nitobe_placement: The theme setting for how the sidebars should be
 *     rendered relative to the content region. Will be one of: 'left',
 *     'center', or 'right'.
 *   - nitobe_primary_links: The HTML for the rendered primary links.
 *   - nitobe_render_date: whether or not to render the date for this type if
 *     the page is a node page.
 *   - nitobe_secondary_links: The HTML for the rendered secondary links.
 *   - nitobe_slogan: The HTML for the site slogan.
 *   - nitobe_title: The HTML for the linked title.
 *   - tabs2: The HTML for the menu secondary local tasks.
 */
function nitobe_preprocess_page(&$vars) {
  $vars['tabs2'] = menu_secondary_local_tasks();

  // -- Determine which layout to use.
  nitobe_set_layout($vars);

  // -- Re-order the CSS files so that the framework styles come first.
  $vars['css_alt'] = nitobe_css_reorder($vars['css']);
  $vars['styles'] = drupal_get_css($vars['css_alt']);

  // -- Determine if the masthead image should be displayed.
  $force_header = theme_get_setting('nitobe_header_always_show');
  $masthead     = $vars['masthead'];

  if ($force_header || empty($masthead)) {
    nitobe_add_masthead_image($vars);
  }

  // -- Handle the title effect
  if (isset($vars['site_name']) && ((boolean)theme_get_setting('nitobe_title_effect') == TRUE)) {
    $vars['nitobe_title'] = nitobe_title_effect(check_plain($vars['site_name']));
  } else {
    $vars['nitobe_title'] = check_plain($vars['site_name']);
  }

  // -- Optimize the site name to be better for search engines. If viewing as a
  // -- page, the site name is demoted to an H2 element instead of the default
  // -- H1 element. This CSS will render them identically.
  if (isset($vars['nitobe_title'])) {
    $base = '<%s id="site-title"><a href="%s" title="%s">%s</a></%s>';
    $elem = empty($vars['title']) ? 'h1' : 'span';

    $vars['nitobe_title'] = sprintf($base, $elem,
                                    check_url($vars['front_page']),
                                    $vars['site_name'],
                                    $vars['nitobe_title'], $elem);
  }

  if (isset($vars['logo'])) {
    $pattern = '<a href="%s" title="%s"><img src="%s" alt="%s" id="logo" /></a>';
    $vars['nitobe_logo'] = sprintf($pattern, check_url($vars['front_page']),
                                             check_plain($vars['site_name']),
                                             check_url($vars['logo']),
                                             check_plain($vars['site_title']));
  }

  if (isset($vars['site_slogan'])) {
  	$pattern = '<span id="site-slogan">%s</span>';
  	$vars['nitobe_slogan'] = sprintf($pattern, check_plain($vars['site_slogan']));
  }

  if (isset($vars['secondary_links'])) {
    $props = array(
    	'id'    => 'secondary-nav',
    	'class' => 'links secondary-links grid-16'
    );

    $vars['nitobe_secondary_links'] = theme('links', $vars['secondary_links'], $props);
  }

  if (!empty($vars['primary_links'])) {
    $props = array(
      'id'    => 'primary-nav',
      'class' => 'grid-16'
    );

    if (!empty($vars['nitobe_secondary_links'])) {
      $props['class'] = 'grid-16 has-secondary';
    }

    $vars['nitobe_primary_links'] = theme('links', $vars['primary_links'], $props);
  }

  // -- Pre-render the page title with the appropriate CSS classes.
  $title_class = ($vars['tabs'] ? ' class="with-tabs"' : '');
  $title_pat   = '<h1 id="page-title" %s>%s</h1>';
  $vars['nitobe_page_title'] = sprintf($title_pat, $title_class, $vars['title']);

  // -- The formatted date for this node, if the date should be rendered.
  $node = $vars['node'];
  if (!empty($node) && isset($node->created) && nitobe_show_datestamp($node->type)) {
    $vars['nitobe_node_timestamp'] = format_date($node->created, 'custom', t('d M Y'));
  }

  // -- Are all of the bottom block areas empty?
  $vars['nitobe_bottom_empty'] = empty($vars['bottom_left']) &&
                                 empty($vars['bottom_center_left']) &&
                                 empty($vars['bottom_center_right']) &&
                                 empty($vars['bottom_right']);
}


/**
 * Overrides template_preprocess_comment().
 *
 * @param array &$vars
 *   The template variables. After invoking this function, these keys will be
 *   added to $vars:
 *   - nitobe_author_date: The formatted author link and date for the comment's
 *     meta data area.
 *   - nitobe_comment_class: The CSS classes to apply to this comment.
 *   - nitobe_comment_links: The comment links with a delimiter added.
 */
function nitobe_preprocess_comment(&$vars) {
  $comment = $vars['comment'];
  $node    = $vars['node'];

  $vars['author']  = theme('username', $comment);
  $vars['content'] = $comment->comment;

  // -- Adjust the title link to have a title.
  $options = array(
    'fragment'   => "comment-$comment->cid",
    'attributes' => array(
      'title' => t('Permanent link to this comment.'),
    ),
  );

  $vars['title'] = l($comment->subject, $_GET['q'], $options);

  // -- The author and timestamp
  $params = array(
    '@date'   => format_date($comment->timestamp, 'custom', t('M jS, Y')),
    '@time'   => format_date($comment->timestamp, 'custom', t('g:i a')),
    '!author' => $vars['author'],
  );

  $vars['nitobe_author_date'] = t('Posted by !author on @date at @time.',
                                  $params);

  // -- Add the separator characters between the links.
  $vars['nitobe_comment_links'] = nitobe_separate_links($vars['links']);

  // -- Determine the CSS classes for the comment.
  $author      = ($comment->uid == $node->uid) ? ' original-author' : '';
  $comment_new = ($comment->new) ? ' comment-new' : '';
  $logged_in   = isset($comment->uid) ? ' commenter-logged-in' : '';

  $vars['nitobe_comment_class'] = "comment {$vars['status']} {$vars['zebra']}" .
                                  $comment_new . $logged_in . $author .
                                  ' clear-block';
}


/**
 * Renders the local tasks.
 *
 * The default implementation renders them as tabs. Overridden to split the
 * secondary tasks.
 *
 * @return string
 *   The rendered local tasks.
 */
function phptemplate_menu_local_tasks() {
  return menu_primary_local_tasks();
}


/**
 * Stores the theme settings' default values in the database.
 *
 * The default values are read from the theme's .info file.
 *
 * @param string $theme
 *   The name of theme that is being being checked.
 */
function nitobe_settings_init($theme) {
  $themes = list_themes();

  // -- Get the default values from the .info file.
  $defaults = $themes[$theme]->info['settings'];

  // -- Get the theme settings saved in the database.
  $settings = theme_get_settings($theme);

  // -- Don't save the toggle_node_info_ variables.
  if (module_exists('node')) {
    foreach (node_get_types() as $type => $name) {
      unset($settings['toggle_node_info_' . $type]);
    }
  }

  // -- Save default theme settings.
  variable_set(str_replace('/', '_', 'theme_' . $theme . '_settings'),
               array_merge($defaults, $settings));

  // -- Force refresh of Drupal internals.
  theme_get_setting('', TRUE);
}


/**
 * Generates IE CSS links for LTR and RTL languages.
 *
 * @return string
 *   The IE style elements.
 */
function phptemplate_get_ie_styles() {
  global $language;

  $iecss = '<link type="text/css" rel="stylesheet" media="screen" href="' .
           base_path() . path_to_theme() .'/styles/fix-ie.css" />';
  if (defined('LANGUAGE_RTL') && $language->direction == LANGUAGE_RTL) {
    $iecss .= '<style type="text/css" media="screen">@import "' .
              base_path() . path_to_theme() .'/styles/fix-ie-rtl.css";</style>';
  }

  return $iecss;
}


/**
 * Determines the layout.
 *
 * The layout is determined the nitobe_content_placement setting and number of
 * sidebars that have content.
 *
 * @param array &$vars
 *   The template variables. After invoking this function, these keys will be
 *   added to $vars:
 *   - nitobe_classes: The CSS classes to apply to the content and sidebar
 *     regions. This array will have 'content', 'left', and 'right' as keys.
 *     The values will include the grid size for the region and any push/pull
 *     classes it needs.
 *   - nitobe_content_width: The CSS class providing the full width of the
 *     content region without any push/pull classes.
 *   - nitobe_placement: The theme setting for how the sidebars should be
 *     rendered relative to the content region. Will be one of: 'left',
 *     'center', or 'right'.
 */
function nitobe_set_layout(&$vars) {
  // -- Add the layout variables.
  $placement = theme_get_setting('nitobe_content_placement');
  $placement = empty($placement) ? 'center' : $placement;
  $layout    = $vars['layout'];
  $vars['nitobe_placement'] = $placement;

  // -- Determine the classes for the content and sidebars.
  $has_left  = (($layout == 'left')  || ($layout == 'both'));
  $has_right = (($layout == 'right') || ($layout == 'both'));

  $vars['nitobe_classes']['content'] = nitobe_ns('grid-16', $has_left, 4, $has_right, 4);
  $vars['nitobe_classes']['left']    = 'grid-4';
  $vars['nitobe_classes']['right']   = 'grid-4';
  $vars['nitobe_content_width']      = $vars['nitobe_classes']['content'];

  // -- This array provides the push/pull classes for the various layout
  // -- possibilities. The CSS class values should be appended to the
  // -- appropriate regions classes. The array is accessed as such:
  // --
  // -- $push_pull[$placement][$layout][$region]
  // --    $placement is one of left, right, or center and indicates where the
  // --            sidebars are placed relative to the content.
  // --    $layout is one of left, right, or both and indicates which sidebars
  // --            are present.
  // --    $region is one of content, left, right and indicates which region
  // --            push/pull classes are wanted for.
  $push_pull = array(
    'center' => array(
      'left' => array(
        'content' => 'push-4',
        'left'    => 'pull-12',
      ),
      'both' => array(
        'content' => 'push-4',
        'left'    => 'pull-8',
      ),
    ),
    'left' => array(
      'left' => array(
        'content' => 'push-4',
        'left'    => 'pull-12',
      ),
      'right' => array(
        'content' => 'push-4',
        'right'   => 'pull-12',
      ),
      'both' => array(
        'content' => 'push-8',
        'left'    => 'pull-8',
        'right'   => 'pull-8',
      ),
    ),
  );

  // -- Add the push/pull classes.
  foreach (array('content', 'left', 'right') as $region) {
    $to_add = isset($push_pull[$placement][$layout][$region]) ?
              ' ' . $push_pull[$placement][$layout][$region] : '';
    $vars['nitobe_classes'][$region] .= $to_add;
  }
}
