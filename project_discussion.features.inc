<?php

/**
 * Implementation of hook_node_info().
 */
function project_discussion_node_info() {
  $items = array(
    'project_discussion' => array(
      'name' => t('Project Discussion'),
      'module' => 'features',
      'description' => t('This content types works similar to the blog entry, but adds a node reference field linking this discussion to a particular project.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function project_discussion_views_api() {
  return array(
    'api' => '2',
  );
}
