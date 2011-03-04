<?php


/*
 * Implementation preprocess_page().
 */
function kvg_preprocess_page(&$vars) {
  /**
  * rejigger front page logo
  */
  if($vars['logo']) {
    $preset = 'front_page_logo';
    $alt_text = $vars['site_slogan'];
    $title = $vars['head_title'];
    $vars['logo_header'] = theme('imagecache', $preset, 'logo.gif', $alt_text, $title, $attributes);  
  }

//  $vars['submit_directory_link'] = l('Submit Free Listing', 'listing/submit-directory-listing', 
//    array('attributes' => 
//        array('class' => 'submit submit-directory-link',),
//    )    
//  );
  $menu = menu_navigation_links('menu-submit-links');
  $menu_attributes = array('class' => 'submit-links');
  $vars['submit_menu_link'] = theme_links($menu, $menu_attributes); 

}


/**
* Implementation of kvg_preprocess_node
*/
function kvg_preprocess_node(&$vars, $hook) {
  $node = $vars->node;
  // Optionally, run node-type-specific preprocess functions, like
  // threesixty_d6_preprocess_node_page() or threesixty_d6_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $vars['node']->type;
  if (function_exists($function)) {
    $function($vars);
  }

}

/**
* Implementation of kvg_preprocess_node_directory
*/
function kvg_preprocess_node_directory(&$vars) {
  /*********  RENDER DIRECTORY NODE ELEMENTS */

  /* MAP */
  if($vars['locations']) {
    $latitude = $vars['locations'][0]['latitude'];
    $longitude = $vars['locations'][0]['longitude'];
    $map_content = _kvg_map_content($vars['node']);  
    $vars['map'] = gmap_simple_map($latitude, $longitude, '', $map_content, '14', 'default', TRUE);
  }
    
  /* BODY */
  $vars['body_rendered'] = $vars['node']->content['body']['#value'];
  
  /* SECTIONS */
  $vars['field_sections_rendered'] = l($vars['field_section'][0]['safe'], 'directory/' . ($vars['field_section']['0']['value']), array('attributes' => array('class' => 'link directory-section-link',)));
  if($vars['field_section'][1]['safe']) {
    $vars['field_sections_rendered'] .= " & " . l($vars['field_section'][1]['safe'], 'directory/' . ($vars['field_section']['1']['value']), array('attributes' => array('class' => 'link directory-section-link',)));  
  }
  
  /*REFERENCE LINK */
  $vars['reference_link'] = l('Read More', $vars['path'], array('attributes' => array('class' => 'links reference-link')));
  dsm($vars);
}

/**
* Implementation of kvg_preprocess_node_article
*/
function kvg_preprocess_node_article(&$vars) {
  
  $vars['hor_image'] = ($vars['field_image_horizontal'][0]['filepath']) ?
    $vars['field_image_horizontal'][0]['view'] : FALSE;

  $vars['vert_image'] = ($vars['field_image_vertical'][0]['filepath']) ?
    $vars['field_image_vertical'][0]['view'] : FALSE;
  
  $vars['body'] = $vars['node']->content['body']['#value'];
}

/**
* Implementation of custom function for populating pop-up map data.
*
* @return
*   html data that populates gmap popup data.
*/
function _kvg_map_content($node = NULL) {
  global $base_root;

  // LINK 
  $link = "<a class='map-burst-link' href='" . $base_root . base_path() . "node/" . $node->nid . "'>"; 
  $close_link = "</a>";

  // TITLE
  $title = "<h3 class=\"map-bubble-title\">" . $node->title . "</div>";
  $title = $link . $title . $close_link;
  
  // IMAGE
//  if($node->field_kvg_ad[0]['filepath']) {
//    $kvg_ad = theme('imagecache', 'image_logo', $node->field_kvg_ad[0]['filepath'], $title, $title);
//    $kvg_ad = "<div class=\"map-bubble-image\" style='float:left;margin:10px;'>" . $kvg_ad . "</div>";  
//    $kvg_ad = $link . $kvg_ad . $close_link;
//  }
//  else {
//    $kvg_ad = "";
//  }
//
//  // CONTENT
//  $description = "<div class=\"map-bubble-description\">" . $node->body . "</div>";
  $address  = ($node->locations[0]['street']) ? '<div class="map-bubble-address"><strong>Address:</strong> ' . $node->locations[0]['street'] . ', ' . $node->locations[0]['city'] . "</div>" : '';
  $phone    = ($node->field_phone[0]['view']) ? '<div class="map-bubble-phone"><strong>Phone</strong>: ' . $node->field_phone[0]['view'] . "</div>" : '';
  $website  = ($node->field_website[0]['view']) ? '<div class="map-bubble-website">' . $node->field_website[0]['view'] . "</div>" : '';
  $email    = ($node->field_email[0]['safe']) ? '<div class="map-bubble-email"><strong>Email:</strong> ' . $node->field_email[0]['safe'] . "</div>" : '';
  // MORE LINK
  $more_link = "<div id=\"map-burst-link-more\">" . $link . "More >>" . $end_link . "</div>";
  
  
  // Output layout
  $map_content = $gnd_ad . $title . $address . $phone . $website . $email . $more_link;
  return $map_content;
}

/**
* Implementation of custom search results
*/
function kvg_preprocess_search_result(&$vars) {
  $result = $vars['result'];
  
//  foreach ($results as $result) {
    $vars['search_link'] = l('More >>', $result['link']);
    $vars['search_type'] = $result['type'];
    $vars['search_title'] = $result['title'];
    $vars['search_body'] =  $result['snippet'];
    $vars['search_image'] = get_image($result); // custom image function
    $vars['search_edit_link'] = l('<< Edit >>', $base_path . 'node/' . $result['node']->nid . '/edit');
    
//    $result = "<div class='search-results grid-12 alpha omega'>" 
//      . "<div class='search-title grid-12 alpha omega'>" . $body . "</div>"
//      . "<div class='search-image grid-4 alpha'>" . $image . "</div>"
//      . "<div class='search-snippet grid-6'>" . $body . "</div>"
//      . "<div class='search-link grid-2'>" . l('More >>', $link) . "</div>"
//      . "<div class='search-edit grid-2'>" . l('<< Edit >>', $edit_link) . "</div>"      
//      . "</div>";
//  }
  dsm($vars);
}

/*
* custom image checker for search results 
*/
function get_image($result) {
  $title = $result['title'];  
  if ($result['node']->field_image_vertical[0]['filepath']) {
    $image_path = $result['node']->field_image_vertical[0]['filepath'];
  }
  elseif ($result['node']->field_image_horizontal[0]['filepath']) {
    $image_path = $result['node']->field_image_horizontal[0]['filepath'];
  }
  elseif ($result['node']->field_kvg_ad[0]['filepath']) {
    $image_path = $result['node']->field_kvg_ad[0]['filepath'];
  }
  else {
    $image_path = NULL;
  }
  
  if($image_path) {
    $image = theme('imagecache', 'article_page_box', $image_path, $title, $title);
  }
  else {
    $image = '<div style="width:300px;">&nbsp;</div>';
  }
  
  return ($image);  
}

/**
* Implementation of template_preprocess_views_view
*/
//function kvg_preprocess_views_view(&$vars, $hook) {
//
//  dsm($hook);
//  $vars['section'] = $vars['view']->args[0];
//
//}