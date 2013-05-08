<?php
/**
 * @file
 * kg_layout.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kg_layout_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured_article';
  $view->description = 'Featured article teaser and Current Edition Block';
  $view->tag = 'front page';
  $view->base_table = 'node';
  $view->human_name = 'Front Page Featured Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'featured';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_image_horizontal']['id'] = 'field_image_horizontal';
  $handler->display->display_options['fields']['field_image_horizontal']['table'] = 'field_data_field_image_horizontal';
  $handler->display->display_options['fields']['field_image_horizontal']['field'] = 'field_image_horizontal';
  $handler->display->display_options['fields']['field_image_horizontal']['label'] = '';
  $handler->display->display_options['fields']['field_image_horizontal']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image_horizontal']['element_class'] = 'featured-image';
  $handler->display->display_options['fields']['field_image_horizontal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_horizontal']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_horizontal']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_horizontal']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_image_horizontal']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_horizontal']['settings'] = array(
    'image_style' => 'front-highlight_large',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'featured-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'featured-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '80',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Main Image (field_image_horizontal:fid) */
  $handler->display->display_options['filters']['field_image_horizontal_fid']['id'] = 'field_image_horizontal_fid';
  $handler->display->display_options['filters']['field_image_horizontal_fid']['table'] = 'field_data_field_image_horizontal';
  $handler->display->display_options['filters']['field_image_horizontal_fid']['field'] = 'field_image_horizontal_fid';
  $handler->display->display_options['filters']['field_image_horizontal_fid']['operator'] = 'not empty';
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '0';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Featured */
  $handler = $view->new_display('block', 'Featured', 'block');
  $handler->display->display_options['block_description'] = 'Featured Teaser';

  /* Display: Current Edition */
  $handler = $view->new_display('block', 'Current Edition', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Read the print edition.';
  $handler->display->display_options['display_description'] = 'Current Magazine Cover';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_image_horizontal']['id'] = 'field_image_horizontal';
  $handler->display->display_options['fields']['field_image_horizontal']['table'] = 'field_data_field_image_horizontal';
  $handler->display->display_options['fields']['field_image_horizontal']['field'] = 'field_image_horizontal';
  $handler->display->display_options['fields']['field_image_horizontal']['label'] = '';
  $handler->display->display_options['fields']['field_image_horizontal']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image_horizontal']['element_class'] = 'featured-image';
  $handler->display->display_options['fields']['field_image_horizontal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_horizontal']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_horizontal']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_horizontal']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_image_horizontal']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_horizontal']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'featured-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'featured-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '80',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Main Image (field_image_horizontal:fid) */
  $handler->display->display_options['filters']['field_image_horizontal_fid']['id'] = 'field_image_horizontal_fid';
  $handler->display->display_options['filters']['field_image_horizontal_fid']['table'] = 'field_data_field_image_horizontal';
  $handler->display->display_options['filters']['field_image_horizontal_fid']['field'] = 'field_image_horizontal_fid';
  $handler->display->display_options['filters']['field_image_horizontal_fid']['operator'] = 'not empty';
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '1';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Current Edition';
  $export['featured_article'] = $view;

  $view = new view();
  $view->name = 'front_page';
  $view->description = 'Front Page Nodes';
  $view->tag = 'front page';
  $view->base_table = 'node';
  $view->human_name = 'Front Page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = 1;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_horizontal_fid' => array(
      'element_type' => 'div',
      'class' => 'lead-article-image-horz grid-16 alpha omega',
    ),
    'phpcode' => array(
      'element_type' => 'div',
      'class' => 'grid-4 omega',
    ),
    'title' => array(
      'element_type' => 'h2',
      'class' => 'lead-article-title grid-16 alpha omega',
    ),
    'body' => array(
      'element_type' => 'p',
      'class' => 'lead-article-body grid-12 alpha',
    ),
    'edit_node' => array(
      'element_type' => 'span',
      'class' => 'lead-article-edit grid-6 alpha',
    ),
    'view_node' => array(
      'element_type' => 'span',
      'class' => 'lead-article-link grid-6',
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'queue1' => 'queue1',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="lead-article-extra-links" class="grid-4 omega">
<?php
$block = module_invoke(\'directory\', \'block\', \'view\', 0);
print $block[\'content\'];
  ?>
</div>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['text'] = 'EDIT';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['text'] = 'More >>';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'webform' => 'webform',
  );

  /* Display: Page - lead */
  $handler = $view->new_display('page', 'Page - lead', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="lead-article-extra-links" class="grid-4 omega">
<?php
$block = module_invoke(\'directory\', \'block\', \'view\', 0);
print $block[\'content\'];
  ?>
</div>';
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_revision_data';
  $handler->display->display_options['fields']['body']['field'] = 'body-revision_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '450';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['text'] = 'EDIT';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['text'] = 'More >>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'front';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = 3;
  $handler->display->display_options['pager']['options']['offset'] = 1;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['list']['class'] = 'grid-16 alpha omega';
  $handler->display->display_options['style_options']['row']['class'] = 'sub-articles grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'first ';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_revision_data';
  $handler->display->display_options['fields']['body']['field'] = 'body-revision_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['text'] = 'More >>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page_1' => 0,
    'slide_show__front_corked' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['render_pager'] = TRUE;
  $export['front_page'] = $view;

  $view = new view();
  $view->name = 'front_page_slider';
  $view->description = 'Front Page Slider';
  $view->tag = 'front page';
  $view->base_table = 'node';
  $view->human_name = 'Front Page Slider';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = 1;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_horizontal_fid' => array(
      'element_type' => 'div',
      'class' => 'lead-article-image-horz grid-16 alpha omega',
    ),
    'phpcode' => array(
      'element_type' => 'div',
      'class' => 'grid-4 omega',
    ),
    'title' => array(
      'element_type' => 'h2',
      'class' => 'lead-article-title grid-16 alpha omega',
    ),
    'body' => array(
      'element_type' => 'p',
      'class' => 'lead-article-body grid-12 alpha',
    ),
    'edit_node' => array(
      'element_type' => 'span',
      'class' => 'lead-article-edit grid-6 alpha',
    ),
    'view_node' => array(
      'element_type' => 'span',
      'class' => 'lead-article-link grid-6',
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'queue1' => 'queue1',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="lead-article-extra-links" class="grid-4 omega">
<?php
$block = module_invoke(\'directory\', \'block\', \'view\', 0);
print $block[\'content\'];
  ?>
</div>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['text'] = 'EDIT';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['text'] = 'More >>';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'webform' => 'webform',
  );

  /* Display: SliderBlock */
  $handler = $view->new_display('block', 'SliderBlock', 'slide_show__front_corked');
  $handler->display->display_options['display_description'] = 'Front Page slider block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['group']['element_type'] = 'div';
  $handler->display->display_options['style_options']['group']['class'] = 'slides';
  $handler->display->display_options['style_options']['list']['class'] = 'slides';
  $handler->display->display_options['style_options']['row']['class'] = 'slider-item';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image_horizontal' => array(
      'element_type' => 'div',
      'class' => 'slider-item-image',
    ),
    'title' => array(
      'element_type' => 'div',
      'class' => 'slider-item-title',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'slider-item-body',
    ),
    'edit_node' => array(
      'element_type' => 'span',
      'class' => 'edit-link',
    ),
    'view_node' => array(
      'element_type' => 'div',
      'class' => 'slider-link',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<!--slide-control-->
 <div class="slide-control">
  <div id="prev" href="#">
    <span class="websymbols"> < </span>
  </div>
  <div id="next" href="#">
    <span class="websymbols">></span>
  </div>
</div>
<!--EOF:slide-control-->
<!--#slide-nav-->
<ul id=\'slide-nav\'>
<?php 
$total = count($results); 
for($link = 0; $link < $total;  $link++) {
 echo \'<li><a href="#"> </a></li>\';
}
?>

</ul>
<!--EOF:#slide-nav-->
';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_image_horizontal']['id'] = 'field_image_horizontal';
  $handler->display->display_options['fields']['field_image_horizontal']['table'] = 'field_data_field_image_horizontal';
  $handler->display->display_options['fields']['field_image_horizontal']['field'] = 'field_image_horizontal';
  $handler->display->display_options['fields']['field_image_horizontal']['label'] = '';
  $handler->display->display_options['fields']['field_image_horizontal']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image_horizontal']['element_class'] = 'slider-item-image';
  $handler->display->display_options['fields']['field_image_horizontal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_horizontal']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_horizontal']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_horizontal']['settings'] = array(
    'image_style' => 'front-slideshow_full-width',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [edit_node]';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'slider-item-title, light';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<span class=\'edit-slideshow-node\'>[edit_node]</span>';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'span';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'admin-edit-link';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'EDIT';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['text'] = ' [body] [view_node]';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'slider-item-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Global: Body with links */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: Body with links';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'slider-item-body\'>[edit_node] [body] [view_node]</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Highlighted Slider Block';
  $handler->display->display_options['block_caching'] = '-1';
  $export['front_page_slider'] = $view;

  $view = new view();
  $view->name = 'highlighted_sections';
  $view->description = 'Sections taxonomy teasers blocks for front page.';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Featured Teasers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'featured-teaser';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '[name]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_class'] = 'featured-teaser-title';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Summer */
  $handler->display->display_options['fields']['field_summer']['id'] = 'field_summer';
  $handler->display->display_options['fields']['field_summer']['table'] = 'field_data_field_summer';
  $handler->display->display_options['fields']['field_summer']['field'] = 'field_summer';
  $handler->display->display_options['fields']['field_summer']['label'] = '';
  $handler->display->display_options['fields']['field_summer']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_summer']['alter']['path'] = '[name]';
  $handler->display->display_options['fields']['field_summer']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_summer']['element_class'] = 'featured-teaser-image';
  $handler->display->display_options['fields']['field_summer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summer']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_summer']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_summer']['settings'] = array(
    'image_style' => 'front-teaser_horizontal_small',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Fall */
  $handler->display->display_options['fields']['field_fall']['id'] = 'field_fall';
  $handler->display->display_options['fields']['field_fall']['table'] = 'field_data_field_fall';
  $handler->display->display_options['fields']['field_fall']['field'] = 'field_fall';
  $handler->display->display_options['fields']['field_fall']['label'] = '';
  $handler->display->display_options['fields']['field_fall']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fall']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_fall']['alter']['path'] = '[name]';
  $handler->display->display_options['fields']['field_fall']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_fall']['element_class'] = 'featured-teaser-image';
  $handler->display->display_options['fields']['field_fall']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fall']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fall']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fall']['settings'] = array(
    'image_style' => 'front-teaser_horizontal_small',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Spring */
  $handler->display->display_options['fields']['field_spring']['id'] = 'field_spring';
  $handler->display->display_options['fields']['field_spring']['table'] = 'field_data_field_spring';
  $handler->display->display_options['fields']['field_spring']['field'] = 'field_spring';
  $handler->display->display_options['fields']['field_spring']['label'] = '';
  $handler->display->display_options['fields']['field_spring']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spring']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_spring']['alter']['path'] = '[name]';
  $handler->display->display_options['fields']['field_spring']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_spring']['element_class'] = 'featured-teaser-image';
  $handler->display->display_options['fields']['field_spring']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spring']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_spring']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spring']['settings'] = array(
    'image_style' => 'front-teaser_horizontal_small',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Winter */
  $handler->display->display_options['fields']['field_winter']['id'] = 'field_winter';
  $handler->display->display_options['fields']['field_winter']['table'] = 'field_data_field_winter';
  $handler->display->display_options['fields']['field_winter']['field'] = 'field_winter';
  $handler->display->display_options['fields']['field_winter']['label'] = '';
  $handler->display->display_options['fields']['field_winter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_winter']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_winter']['alter']['path'] = '[name]';
  $handler->display->display_options['fields']['field_winter']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_winter']['element_class'] = 'featured-teaser-image';
  $handler->display->display_options['fields']['field_winter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_winter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_winter']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_winter']['settings'] = array(
    'image_style' => 'front-teaser_horizontal_small',
    'image_link' => '',
  );
  /* Field: PHP: Image selector */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'PHP: Image selector';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$season = variable_get(\'kvg_season\', \'summer\');
';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
print($row->field_summer); 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Taxonomy vocabulary: Description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_type'] = 'div';
  $handler->display->display_options['fields']['description']['element_class'] = 'featured-teaser-body';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'section_taxonomy' => 'section_taxonomy',
  );

  /* Display: Section-Teaser1 */
  $handler = $view->new_display('block', 'Section-Teaser1', 'block');
  $handler->display->display_options['block_description'] = 'Teaser1';

  /* Display: Section-Teaser2 */
  $handler = $view->new_display('block', 'Section-Teaser2', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '3';
  $handler->display->display_options['block_description'] = 'Teaser2';
  $export['highlighted_sections'] = $view;

  return $export;
}
