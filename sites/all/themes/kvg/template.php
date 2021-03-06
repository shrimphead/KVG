<?php


/*
 * Implementation preprocess_page().
 */
function kvg_preprocess_page(&$vars) {
  /**
  * rejigger front page logo
  */
  if($vars['logo']) {
    $logo_file = array_pop(explode('/', $vars['logo']));
    
    $preset = 'site_logo';
    $alt_text = $vars['site_slogan'];
    $title = $vars['head_title'];
    $vars['logo_header'] = theme('imagecache', $preset, $logo_file, $alt_text, $title, $attributes);  
  }

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
  
  /* TEASER DATA FOR NODE REFERENCE */
  if($vars['teaser'] == TRUE) {
//    if($vars['type'] == 'article' ) {
//    }
//    if($vars['type'] == 'directory' ) {
//    }

    /* TEASER BODY */
    $teaser_body = word_trim(strip_tags($vars['node']->content['body']['#value']), 50, TRUE);
    $vars['teaser_body'] = $teaser_body;
    $vars['teaser_short_body'] = word_trim(strip_tags($vars['content']), 20, TRUE);
    
    /* TEASER IMAGE */
    if($vars['field_image_horizontal'][0]['filepath'] == TRUE) {
      $teaser_image = $vars['field_image_horizontal'][0]['filepath'];
    }
    elseif($vars['field_image_vertical'][0]['filepath'] == TRUE) {
      $teaser_image = $vars['field_image_vertical'][0]['filepath'];
    }
    elseif($vars['field_kvg_ad'][0]['filepath'] == TRUE) {
      $teaser_image = $vars['field_kvg_ad'][0]['filepath'];
    }
    elseif($vars['field_image'][0]['filepath'] == TRUE) {
      $teaser_image = $vars['field_image'][0]['filepath'];
    }

    /* TEASER IMAGE */
    if ($teaser_image) {      
      $attributes = array('class' => 'teaser-image-reference',);
      $title = $vars['title'];
      $vars['teaser_image'] = theme('imagecache', 'image_logo', $teaser_image, $title, $title, $attributes);    
    }
    
    /* TEASER LINK */
    $attributes = array('attributes' => array('class' => 'links reference-links read-more-link'));
    $vars['reference_link'] = l('Read more', $vars['path'], $attributes);
  }

  $attributes = array('attributes' => array('class' => 'links feedback-link'));  
  $vars['feedback'] = l('Have a comment or correction? Fill out our feedback form here.', 'feedback', $attributes);
}

/**
* Implementation of kvg_preprocess_node_directory
*/
function kvg_preprocess_node_directory(&$vars) {
  // Check Publish date of Directory to determine status.
  // If newer then $ad_status stays TRUE
  // - Determine when ad was updated.
  $ad_status = TRUE;
  if($vars['field_year'][0]['value'] <= date("Y", strtotime("-1 years"))) {
    
    // Create FALSE flag for extra attention and prevent map and extra images.
    $ad_status = FALSE;
    // Remove PERKS
    $vars['field_kvg_ad_rendered'] = FALSE;
    $vars['field_website_rendered'] = FALSE;
    $vars['field_image_rendered'] = FALSE;
    // Message displayed to viewer.
    $ad_status_display = "<div class='status-flag status-flag out-of-date'>
<a href='http://visitkaslo.com/submit-directory-listing'>Get your free ad listing here.</a></div>";
  }
  else if ( $vars['changed'] > strtotime("-4 months")) {
    $ad_status_display = "<div class='status-flag status-flag recent-update'>Recently Updated!</div>";
  }
  else {
    $ad_status_display = NULL;
  }
  
  $vars['ad_status_display'] = $ad_status_display;


  /*********  RENDER DIRECTORY NODE ELEMENTS */
  
  /* OPTIONAL IMAGE */
  if($vars['field_image'][0]['filepath'] && $ad_status) {
    $optional_image = $vars['field_image'][0]['filepath'];
    $vars['optional_image'] = theme('imagecache', 'directory_image', $optional_image);
  }

  /* MAP */
  if($vars['location']['latitude'] && $ad_status) {
    $latitude = $vars['location']['latitude'];
    $longitude = $vars['location']['longitude'];
    $map_content = _kvg_map_content($vars['node']);
    $height = 'default';
    $width = 'default';
    
    $vars['map'] = gmap_simple_map($latitude, $longitude, '', $map_content, '14', $width, $height, FALSE);
  }
  else {
    $vars['map'] = '';
  }

  /* ADDRESS */
  if($vars['location']['street'] || $vars['location']['additional'] && $ad_status) {
    $street       = ($vars['location']['street'])       ? '<span class="address-street">'     . $vars['location']['street']      . '</span>' : '';
    $additional   = ($vars['location']['additional'])   ? '<span class="address-additional">' . $vars['location']['additional']  . '</span>' : '';
    $city         = ($vars['location']['city'])         ? '<span class="address-city">'       . $vars['location']['city']        . '</span>' : '';
    $province     = ($vars['location']['province'])     ? '<span class="address-province">'   . $vars['location']['province']    . '</span>' : '';
    $postal_code  = ($vars['location']['postal_code'])  ? '<span class="address-postal_code">'. $vars['location']['postal_code'] . '</span>' : '';
    $country      = ($vars['location']['country'])      ? '<span class="address-country">'    . $vars['location']['country']     . '</span>' : '';

    $vars['address'] = $street . $additional . $city . $province . $postal_code . $country;
  }
    
  /* BODY */
  $vars['body_rendered'] = $vars['node']->content['body']['#value'];
  
  /* SECTIONS */
  $vars['field_sections_rendered'] = l($vars['field_section'][0]['safe'], 'directory/' . ($vars['field_section']['0']['value']), array('attributes' => array('class' => 'link directory-section-link',)));
  if($vars['field_section'][1]['safe']) {
    $vars['field_sections_rendered'] .= " & " . l($vars['field_section'][1]['safe'], 'directory/' . ($vars['field_section']['1']['value']), array('attributes' => array('class' => 'link directory-section-link',)));  
  }
  
  /*REFERENCE */
  $vars['reference_link'] = l('Read more', $vars['path'], array('attributes' => array('class' => 'links reference-link')));
//  $vars['teaser_body'] = $vars['body'] ; //word_trim(strip_tags($vars['body']), 12, TRUE);


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
  
  /* MAP */
  if($vars['location']['latitude']) {
    $latitude = $vars['location']['latitude'];
    $longitude = $vars['location']['longitude'];
    $map_content = _kvg_map_content($vars['node']);
    $width = '280px';
    $height = '380px';
    $vars['map'] = gmap_simple_map($latitude, $longitude, '', $map_content, '14', $width, $height, FALSE);
  }
  else {
    $vars['map'] = '';
  }
  
  $large_image_count = count($vars['field_additional_images_large']);
  if($large_image_count > 0) {
    for($a = 0; $a < $large_image_count; $a++) {
      if($vars['field_additional_images_large'][$a]['filepath']) {
        $vars['large_image_optionals'] .= $vars['field_additional_images_large'][$a]['view'] . '<br>';
      }
    }  
  }
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
  
  if( $result['node']->type == 'directory' ) {
    $image_cache_style = 'result_image_scale';
  }
  else {
    $image_cache_style = 'article_page_box';
  }
  
  if($image_path) {
    $image = theme('imagecache', $image_cache_style, $image_path, $title, $title);
  }
  else {
    $image = '<div style="width:300px;">&nbsp;</div>';
  }
  
  return ($image);  
}



/**
* Trim a string to a given number of words
*
* From Lullabot: http://www.lullabot.com/articles/trim-a-string-to-a-given-word-count
*
* @param $string
*   the original string
* @param $count
*   the word count
* @param $ellipsis
*   TRUE to add "..."
*   or use a string to define other character
* @param $node
*   provide the node and we'll set the $node->
*   
* @return
*   trimmed string with ellipsis added if it was truncated
*/
function word_trim($string, $count, $ellipsis = FALSE){
  $words = explode(' ', $string);
  if (count($words) > $count){
    array_splice($words, $count);
    $string = implode(' ', $words);
    if (is_string($ellipsis)){
      $string .= $ellipsis;
    }
    elseif ($ellipsis){
      $string .= '&hellip;';
    }
  }
  return $string;
}
