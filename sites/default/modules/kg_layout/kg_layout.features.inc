<?php
/**
 * @file
 * kg_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kg_layout_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function kg_layout_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function kg_layout_image_default_styles() {
  $styles = array();

  // Exported image style: ad-med_scale.
  $styles['ad-med_scale'] = array(
    'name' => 'ad-med_scale',
    'effects' => array(
      6 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 240,
          'height' => 240,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front-highlight_large.
  $styles['front-highlight_large'] = array(
    'name' => 'front-highlight_large',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 428,
          'height' => 301,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front-slideshow_full-width.
  $styles['front-slideshow_full-width'] = array(
    'name' => 'front-slideshow_full-width',
    'effects' => array(
      5 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 940,
          'height' => 250,
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: front-teaser_horizontal_small.
  $styles['front-teaser_horizontal_small'] = array(
    'name' => 'front-teaser_horizontal_small',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 125,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: smart-thumbnail-med.
  $styles['smart-thumbnail-med'] = array(
    'name' => 'smart-thumbnail-med',
    'effects' => array(
      4 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 240,
          'strength' => 'high',
          'fallback' => 'smartcrop',
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
