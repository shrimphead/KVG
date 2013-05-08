<?php
/**
 * @file
 * kg_admin.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function kg_admin_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: 1
  $profiles[1] = array(
    'format' => 1,
    'editor' => 'fckeditor',
    'settings' => array(
      'default' => 0,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'StrikeThrough' => 1,
          'JustifyLeft' => 1,
          'JustifyRight' => 1,
          'UnorderedList' => 1,
          'OrderedList' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Subscript' => 1,
          'Blockquote' => 1,
          'Rule' => 1,
          'FontFormat' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'center',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
  );

  // Exported profile: 2
  $profiles[2] = array(
    'format' => 2,
    'editor' => 'fckeditor',
    'settings' => array(
      'default' => 0,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'StrikeThrough' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyFull' => 1,
          'UnorderedList' => 1,
          'OrderedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Image' => 1,
          'Subscript' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'Rule' => 1,
          'Copy' => 1,
          'Paste' => 1,
          'RemoveFormat' => 1,
          'FontSize' => 1,
          'Table' => 1,
          'CreateDiv' => 1,
          'SpellCheck' => 1,
        ),
        'dragresizetable' => array(
          'dragresizetable' => 1,
        ),
        'tablecommands' => array(
          'TableCellProp' => 1,
          'TableInsertRowAfter' => 1,
          'TableInsertColumnAfter' => 1,
          'TableInsertCellAfter' => 1,
          'TableDeleteRows' => 1,
          'TableDeleteColumns' => 1,
          'TableDeleteCells' => 1,
          'TableMergeCells' => 1,
          'TableHorizontalSplitCell' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
  );

  // Exported profile: 4
  $profiles[4] = array(
    'format' => 4,
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 1,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'strikethrough' => 1,
          'justifyleft' => 1,
          'justifycenter' => 1,
          'justifyright' => 1,
          'justifyfull' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'outdent' => 1,
          'indent' => 1,
          'link' => 1,
          'image' => 1,
          'blockquote' => 1,
          'hr' => 1,
          'removeformat' => 1,
        ),
        'wordcount' => array(
          'wordcount' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
  );

  return $profiles;
}
