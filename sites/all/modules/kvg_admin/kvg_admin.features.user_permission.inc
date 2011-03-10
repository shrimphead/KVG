<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function kvg_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'editor',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'authenticated user plus',
      '3' => 'editor',
    ),
  );

  // Exported permission: access own webform submissions
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: access print
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'authenticated user plus',
      '3' => 'editor',
    ),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(),
  );

  // Exported permission: access webform results
  $permissions['access webform results'] = array(
    'name' => 'access webform results',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: administer CAPTCHA settings
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(),
  );

  // Exported permission: administer add another
  $permissions['administer add another'] = array(
    'name' => 'administer add another',
    'roles' => array(),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
  );

  // Exported permission: administer google analytics
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(),
  );

  // Exported permission: administer imageapi
  $permissions['administer imageapi'] = array(
    'name' => 'administer imageapi',
    'roles' => array(),
  );

  // Exported permission: administer imagecache
  $permissions['administer imagecache'] = array(
    'name' => 'administer imagecache',
    'roles' => array(),
  );

  // Exported permission: administer imagecrop
  $permissions['administer imagecrop'] = array(
    'name' => 'administer imagecrop',
    'roles' => array(),
  );

  // Exported permission: administer imce(execute PHP)
  $permissions['administer imce(execute PHP)'] = array(
    'name' => 'administer imce(execute PHP)',
    'roles' => array(),
  );

  // Exported permission: administer lightbox2
  $permissions['administer lightbox2'] = array(
    'name' => 'administer lightbox2',
    'roles' => array(),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: administer meta tags
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(),
  );

  // Exported permission: administer module filter
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(),
  );

  // Exported permission: administer mollom
  $permissions['administer mollom'] = array(
    'name' => 'administer mollom',
    'roles' => array(),
  );

  // Exported permission: administer nodequeue
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: administer page titles
  $permissions['administer page titles'] = array(
    'name' => 'administer page titles',
    'roles' => array(),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
  );

  // Exported permission: administer xmlsitemap
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(),
  );

  // Exported permission: bypass mollom protection
  $permissions['bypass mollom protection'] = array(
    'name' => 'bypass mollom protection',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
  );

  // Exported permission: clear webform results
  $permissions['clear webform results'] = array(
    'name' => 'clear webform results',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: create article content
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: create directory content
  $permissions['create directory content'] = array(
    'name' => 'create directory content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: create visitor_guide_pages content
  $permissions['create visitor_guide_pages content'] = array(
    'name' => 'create visitor_guide_pages content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: create webforms
  $permissions['create webforms'] = array(
    'name' => 'create webforms',
    'roles' => array(),
  );

  // Exported permission: crop any image with toolbox
  $permissions['crop any image with toolbox'] = array(
    'name' => 'crop any image with toolbox',
    'roles' => array(),
  );

  // Exported permission: crop images with toolbox
  $permissions['crop images with toolbox'] = array(
    'name' => 'crop images with toolbox',
    'roles' => array(),
  );

  // Exported permission: delete any article content
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: delete any directory content
  $permissions['delete any directory content'] = array(
    'name' => 'delete any directory content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: delete any visitor_guide_pages content
  $permissions['delete any visitor_guide_pages content'] = array(
    'name' => 'delete any visitor_guide_pages content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: delete own article content
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: delete own directory content
  $permissions['delete own directory content'] = array(
    'name' => 'delete own directory content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: delete own visitor_guide_pages content
  $permissions['delete own visitor_guide_pages content'] = array(
    'name' => 'delete own visitor_guide_pages content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
  );

  // Exported permission: download original image
  $permissions['download original image'] = array(
    'name' => 'download original image',
    'roles' => array(
      '0' => 'authenticated user plus',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit any article content
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: edit any directory content
  $permissions['edit any directory content'] = array(
    'name' => 'edit any directory content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: edit any visitor_guide_pages content
  $permissions['edit any visitor_guide_pages content'] = array(
    'name' => 'edit any visitor_guide_pages content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: edit canonical URL meta tag
  $permissions['edit canonical URL meta tag'] = array(
    'name' => 'edit canonical URL meta tag',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: edit location meta tags
  $permissions['edit location meta tags'] = array(
    'name' => 'edit location meta tags',
    'roles' => array(),
  );

  // Exported permission: edit meta tag ABSTRACT
  $permissions['edit meta tag ABSTRACT'] = array(
    'name' => 'edit meta tag ABSTRACT',
    'roles' => array(),
  );

  // Exported permission: edit meta tag COPYRIGHT
  $permissions['edit meta tag COPYRIGHT'] = array(
    'name' => 'edit meta tag COPYRIGHT',
    'roles' => array(),
  );

  // Exported permission: edit meta tag DESCRIPTION
  $permissions['edit meta tag DESCRIPTION'] = array(
    'name' => 'edit meta tag DESCRIPTION',
    'roles' => array(),
  );

  // Exported permission: edit meta tag Dublin Core CONTRIBUTOR
  $permissions['edit meta tag Dublin Core CONTRIBUTOR'] = array(
    'name' => 'edit meta tag Dublin Core CONTRIBUTOR',
    'roles' => array(),
  );

  // Exported permission: edit meta tag Dublin Core CREATOR
  $permissions['edit meta tag Dublin Core CREATOR'] = array(
    'name' => 'edit meta tag Dublin Core CREATOR',
    'roles' => array(),
  );

  // Exported permission: edit meta tag Dublin Core DATE
  $permissions['edit meta tag Dublin Core DATE'] = array(
    'name' => 'edit meta tag Dublin Core DATE',
    'roles' => array(),
  );

  // Exported permission: edit meta tag Dublin Core DESCRIPTION
  $permissions['edit meta tag Dublin Core DESCRIPTION'] = array(
    'name' => 'edit meta tag Dublin Core DESCRIPTION',
    'roles' => array(),
  );

  // Exported permission: edit meta tag Dublin Core PUBLISHER
  $permissions['edit meta tag Dublin Core PUBLISHER'] = array(
    'name' => 'edit meta tag Dublin Core PUBLISHER',
    'roles' => array(),
  );

  // Exported permission: edit meta tag Dublin Core TITLE
  $permissions['edit meta tag Dublin Core TITLE'] = array(
    'name' => 'edit meta tag Dublin Core TITLE',
    'roles' => array(),
  );

  // Exported permission: edit meta tag KEYWORDS
  $permissions['edit meta tag KEYWORDS'] = array(
    'name' => 'edit meta tag KEYWORDS',
    'roles' => array(),
  );

  // Exported permission: edit meta tag PICS-LABEL
  $permissions['edit meta tag PICS-LABEL'] = array(
    'name' => 'edit meta tag PICS-LABEL',
    'roles' => array(),
  );

  // Exported permission: edit meta tag REVISIT-AFTER
  $permissions['edit meta tag REVISIT-AFTER'] = array(
    'name' => 'edit meta tag REVISIT-AFTER',
    'roles' => array(),
  );

  // Exported permission: edit meta tag ROBOTS
  $permissions['edit meta tag ROBOTS'] = array(
    'name' => 'edit meta tag ROBOTS',
    'roles' => array(),
  );

  // Exported permission: edit own article content
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: edit own directory content
  $permissions['edit own directory content'] = array(
    'name' => 'edit own directory content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: edit own visitor_guide_pages content
  $permissions['edit own visitor_guide_pages content'] = array(
    'name' => 'edit own visitor_guide_pages content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: edit own webform submissions
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      '0' => 'authenticated user plus',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit own webforms
  $permissions['edit own webforms'] = array(
    'name' => 'edit own webforms',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: edit webform submissions
  $permissions['edit webform submissions'] = array(
    'name' => 'edit webform submissions',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: edit webforms
  $permissions['edit webforms'] = array(
    'name' => 'edit webforms',
    'roles' => array(),
  );

  // Exported permission: flush imagecache
  $permissions['flush imagecache'] = array(
    'name' => 'flush imagecache',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
  );

  // Exported permission: manipulate all queues
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: manipulate queues
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
  );

  // Exported permission: opt-in or out of tracking
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'editor',
    ),
  );

  // Exported permission: post comments without approval
  $permissions['post comments without approval'] = array(
    'name' => 'post comments without approval',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'editor',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'authenticated user plus',
      '3' => 'editor',
    ),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(),
  );

  // Exported permission: set page title
  $permissions['set page title'] = array(
    'name' => 'set page title',
    'roles' => array(),
  );

  // Exported permission: skip CAPTCHA
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(),
  );

  // Exported permission: submit latitude/longitude
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      '0' => 'authenticated user plus',
      '1' => 'editor',
    ),
  );

  // Exported permission: use PHP for additional processing
  $permissions['use PHP for additional processing'] = array(
    'name' => 'use PHP for additional processing',
    'roles' => array(),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(),
  );

  // Exported permission: use PHP for tracking visibility
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(),
  );

  // Exported permission: use add another
  $permissions['use add another'] = array(
    'name' => 'use add another',
    'roles' => array(),
  );

  // Exported permission: use admin toolbar
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(),
  );

  // Exported permission: use views exporter
  $permissions['use views exporter'] = array(
    'name' => 'use views exporter',
    'roles' => array(),
  );

  // Exported permission: view imagecache admin_thumbnail
  $permissions['view imagecache admin_thumbnail'] = array(
    'name' => 'view imagecache admin_thumbnail',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'editor',
    ),
  );

  // Exported permission: view imagecache article_horizontal
  $permissions['view imagecache article_horizontal'] = array(
    'name' => 'view imagecache article_horizontal',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'editor',
    ),
  );

  // Exported permission: view imagecache article_page_box
  $permissions['view imagecache article_page_box'] = array(
    'name' => 'view imagecache article_page_box',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'editor',
    ),
  );

  // Exported permission: view imagecache article_vertical
  $permissions['view imagecache article_vertical'] = array(
    'name' => 'view imagecache article_vertical',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'editor',
    ),
  );

  // Exported permission: view imagecache box
  $permissions['view imagecache box'] = array(
    'name' => 'view imagecache box',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'authenticated user plus',
      '3' => 'editor',
    ),
  );

  // Exported permission: view imagecache directory_ad
  $permissions['view imagecache directory_ad'] = array(
    'name' => 'view imagecache directory_ad',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'editor',
    ),
  );

  // Exported permission: view imagecache directory_image
  $permissions['view imagecache directory_image'] = array(
    'name' => 'view imagecache directory_image',
    'roles' => array(),
  );

  // Exported permission: view imagecache front_page_lead_article
  $permissions['view imagecache front_page_lead_article'] = array(
    'name' => 'view imagecache front_page_lead_article',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'editor',
    ),
  );

  // Exported permission: view imagecache front_page_logo
  $permissions['view imagecache front_page_logo'] = array(
    'name' => 'view imagecache front_page_logo',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'editor',
    ),
  );

  // Exported permission: view imagecache front_page_small_articles
  $permissions['view imagecache front_page_small_articles'] = array(
    'name' => 'view imagecache front_page_small_articles',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'editor',
    ),
  );

  // Exported permission: view imagecache image_logo
  $permissions['view imagecache image_logo'] = array(
    'name' => 'view imagecache image_logo',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'authenticated user plus',
      '3' => 'editor',
    ),
  );

  // Exported permission: view imagecache visitor_guide_page_large
  $permissions['view imagecache visitor_guide_page_large'] = array(
    'name' => 'view imagecache visitor_guide_page_large',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'editor',
    ),
  );

  // Exported permission: view imagecache visitor_guide_thumbnail
  $permissions['view imagecache visitor_guide_thumbnail'] = array(
    'name' => 'view imagecache visitor_guide_thumbnail',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'editor',
    ),
  );

  // Exported permission: view location directory
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(),
  );

  // Exported permission: view node location table
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(),
  );

  // Exported permission: view node map
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'authenticated user plus',
      '3' => 'editor',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: view user location details
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(
      '0' => 'authenticated user plus',
      '1' => 'editor',
    ),
  );

  // Exported permission: view user location table
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(),
  );

  // Exported permission: view user map
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  return $permissions;
}
