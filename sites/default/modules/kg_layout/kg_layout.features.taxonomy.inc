<?php
/**
 * @file
 * kg_layout.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function kg_layout_taxonomy_default_vocabularies() {
  return array(
    'section_taxonomy' => array(
      'name' => 'Sections',
      'machine_name' => 'section_taxonomy',
      'description' => 'Types of directory listings',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
