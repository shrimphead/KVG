<?php


/*
 * Implementation preprocess_page().
 */
function phptemplate_preprocess_page(&$vars) {
  /**
   * NODE TEMPLATE SUGGESTIONS
   * Create node.tpl.php suggestions based upon $path & $node
   * Templates precedence is FILO.
   * So, node-$path templates override node-$node templates. If you want node-$node
   * templates to override $path, just swap these to conditional statements.
   */
  
  // Feed everything into a temp array first, 'cause Drush complains.
  
  $suggestions = array();
  
  // Suggest by Node Type 
  if (isset($vars['node'])) {
  // If the node type is "blog" the template suggestion will be "node-blog.tpl.php".
    $sug = 'page-node-'. str_replace('_', '-', $vars['node']->type);
    $suggestions[] = $sug; 
  }
  
  // Suggest by Path 
  // if the uri alias is /videos/crazy
  // add suggestions of page-videos.tpl.php and page-videos-crazy.tpl.php
  if (module_exists('path')) {
    $alias = drupal_get_path_alias(str_replace('/edit','',$_GET['q']));
    if ($alias != $_GET['q']) {
      $template_filename = 'node';
      foreach (explode('/', $alias) as $path_part) {
        $template_filename = $template_filename . '-' . $path_part;
        $suggestions[] = $template_filename;
      }
    }  
  }
  
  /**
   *
   * Finally, before sending to node-[x].tpl, make sure there 
   * aren't any duplicate suggestions.
   */
  
  $suggestions = array_unique($suggestions);
  
  /**
   * Now add those suggestions to your template_files array
   */
  
  foreach ($suggestions as $tmp) {
    $vars['template_files'][] = $tmp;
  }
  

  /**
  * rejigger front page logo
  */
  if($vars['logo']) {
    $preset = 'front_page_logo';
    $alt_text = $vars['site_slogan'];
    $title = $vars['head_title'];
    $vars['logo_header'] = theme('imagecache', $preset, 'logo.gif', $alt_text, $title, $attributes);  
  }
  
  dsm($vars);
}

