<?php

/**
 * Implementation of hook_strongarm().
 */
function crowd_qa_strongarm() {
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
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userpoints_display_message';
  $strongarm->value = '0';

  $export['userpoints_display_message'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userpoints_votingapi_vote_karma_negative';
  $strongarm->value = '-2';

  $export['userpoints_votingapi_vote_karma_negative'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userpoints_votingapi_vote_karma_positive';
  $strongarm->value = '10';

  $export['userpoints_votingapi_vote_karma_positive'] = $strongarm;
  return $export;
}
