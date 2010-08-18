<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function crowd_qa_context_default_contexts() {
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
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'userpoints--1' => array(
          'module' => 'userpoints',
          'delta' => -1,
          'region' => 'right',
          'weight' => 0,
        ),
        'views-crowd_qa_top_users-block_1' => array(
          'module' => 'views',
          'delta' => 'crowd_qa_top_users-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'menu' => 'answers',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Question & Answers');

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

  // Translatables
  // Included for use with string extractors like potx.
  t('Question & Answers');

  $export['crowd_qa-question-node'] = $context;
  return $export;
}
