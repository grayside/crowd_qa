<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function crowd_qa_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function crowd_qa_node_info() {
  $items = array(
    'crowd_qa_answer' => array(
      'name' => t('Answer'),
      'module' => 'features',
      'description' => t('An <em>answer</em> is one potential answer to a question.'),
      'has_title' => '1',
      'title_label' => t('Answer'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'crowd_qa_question' => array(
      'name' => t('Question'),
      'module' => 'features',
      'description' => t('The <em>question</em> type is used to crowdsource the solution or answer to a particular question.'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => t('The crowd prefers to see a detailed, well-researched question.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function crowd_qa_views_api() {
  return array(
    'api' => '2',
  );
}
