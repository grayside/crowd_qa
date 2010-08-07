<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _crowd_qa_content_default_fields() {
  $fields = array();

  // Exported field: field_crowd_qa_question
  $fields[] = array(
    'field_name' => 'field_crowd_qa_question',
    'type_name' => 'crowd_qa_answer',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
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
  array(
    t('Question to Answer'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _crowd_qa_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'crowd_qa-feature-space';
  $context->description = '';
  $context->tag = 'Question & Answers';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'crowd_qa_answer' => 'crowd_qa_answer',
        'crowd_qa_question' => 'crowd_qa_question',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  $export['crowd_qa-feature-space'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'crowd_qa-question-node';
  $context->description = '';
  $context->tag = 'Question & Answers';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'crowd_qa_question' => 'crowd_qa_question',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-crowd_qa_anwers-block_1' => array(
          'module' => 'views',
          'delta' => 'crowd_qa_anwers-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $export['crowd_qa-question-node'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _crowd_qa_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _crowd_qa_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_crowd_qa_answer';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '3',
    'author' => '2',
    'options' => '4',
    'comment_settings' => '5',
    'menu' => '-4',
    'book' => '0',
    'path' => '6',
    'og_nodeapi' => '-3',
    'mark' => '-1',
  );

  $export['content_extra_weights_crowd_qa_answer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_crowd_qa_answer';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_crowd_qa_answer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_crowd_qa_question';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_crowd_qa_question'] = $strongarm;
  return $export;
}
