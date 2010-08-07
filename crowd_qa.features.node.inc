<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _crowd_qa_node_info() {
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
