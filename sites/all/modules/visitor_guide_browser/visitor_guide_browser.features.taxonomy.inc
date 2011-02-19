<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function visitor_guide_browser_taxonomy_default_vocabularies() {
  return array(
    'keywords' => array(
      'name' => 'Keywords',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_keywords',
      'weight' => '0',
      'nodes' => array(
        'page' => 'page',
        'visitor_guide_pages' => 'visitor_guide_pages',
      ),
    ),
  );
}
