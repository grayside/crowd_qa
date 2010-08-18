<?php

/**
 * Implementation of hook_content_default_fields().
 */
function crowd_qa_content_default_fields() {
  $fields = array();

  // Exported field: field_crowd_qa_question
  $fields['crowd_qa_answer-field_crowd_qa_question'] = array(
    'field_name' => 'field_crowd_qa_question',
    'type_name' => 'crowd_qa_answer',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
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
      'crowd_qa_answer' => 0,
      'book' => 0,
      'casetracker_basic_case' => 0,
      'blog' => 0,
      'event' => 0,
      'group' => 0,
      'presentation' => 0,
      'profile' => 0,
      'casetracker_basic_project' => 0,
      'crowd_qa_question' => 0,
      'shoutbox' => 0,
      'project_ticket' => 0,
      'feed_ical_item' => 0,
      'feed_ical' => 0,
    ),
    'advanced_view' => 'crowd_qa_question_options',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_crowd_qa_question][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Question to Answer',
      'weight' => '1',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Question to Answer');

  return $fields;
}
