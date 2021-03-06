<?php

/**
 * Implementation of hook_content_default_fields().
 */
function project_discussion_content_default_fields() {
  $fields = array();

  // Exported field: field_project_reference
  $fields['project_discussion-field_project_reference'] = array(
    'field_name' => 'field_project_reference',
    'type_name' => 'project_discussion',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'casetracker_basic_project' => 'casetracker_basic_project',
      'blog' => 0,
      'book' => 0,
      'casetracker_basic_case' => 0,
      'event' => 0,
      'group' => 0,
      'profile' => 0,
      'shoutbox' => 0,
      'feed_ical_item' => 0,
      'feed_ical' => 0,
      'project_discussion' => 0,
    ),
    'advanced_view' => 'casetracker_projects',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Project',
      'weight' => '-2',
      'description' => 'Choose the project that this discussion relates to.',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Project');

  return $fields;
}
