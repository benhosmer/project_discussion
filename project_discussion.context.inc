<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function project_discussion_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'project_discussion_listing';
  $context->description = '';
  $context->tag = 'Project Discussion';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'project_discussion' => 'project_discussion',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'project_discussion_listing' => 'project_discussion_listing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-project_discussion_comments-block_1' => array(
          'module' => 'views',
          'delta' => 'project_discussion_comments-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'Project Discussion',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Project Discussion');
  $export['project_discussion_listing'] = $context;

  return $export;
}
