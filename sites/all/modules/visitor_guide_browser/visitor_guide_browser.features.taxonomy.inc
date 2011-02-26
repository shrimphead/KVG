<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function visitor_guide_browser_taxonomy_default_vocabularies() {
  return array(
    'keywords' => array(
      'name' => 'Keywords',
      'description' => 'Key words, ideas, ads or geographic areas present.',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '1',
      'tags' => '1',
      'module' => 'features_keywords',
      'weight' => '0',
      'nodes' => array(
        'visitor_guide_pages' => 'visitor_guide_pages',
        'article' => 'article',
      ),
    ),
  );
}
