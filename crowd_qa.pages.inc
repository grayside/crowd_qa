<?php

/**
 * @file
 *  New pages defined for Crowd Q&A module.
 */

/**
 * Page callback for Crowd Q&A settings.
 */
function crowd_qa_admin_settings() {
  $form = array();

  // Duplicate basic comment settings for Question & Answer nodes.
  $form['comment'] = array(
    '#type' => 'fieldset',
    '#title' => t('Comment settings'),
    '#collapsible' => TRUE,
    '#access' => user_access('administer comments'),
  );
  $comment = array(
    '#type' => 'radios',
    '#title' => t('Default comment setting'),
    '#options' => array(t('Disabled'), t('Read only'), t('Read/Write')),
    '#description' => t('Users with the <em>administer comments</em> permission will be able to override this setting.'),
  );

  // Tailor comment settings per content type.
  $names = node_get_types('names');
  foreach (array('question', 'answer') as $type) {
    $form['comment']['comment_crowd_qa_' . $type] = $comment;
    $form['comment']['comment_crowd_qa_' . $type]['#title'] .= t(' for !type content', array('!type' => $names['crowd_qa_' . $type]));
    $form['comment']['comment_crowd_qa_' . $type]['#default_value'] = variable_get('comment_crowd_qa_' . $type, COMMENT_NODE_READ_WRITE);
  }

  // Duplicate Voting Karma so Crowd Q&A can easily tailor the reputation math.
  $form['votingapi'] = array(
    '#type' => 'fieldset',
    '#title' => t('Voting API settings'),
    '#collapsible' => TRUE,
    '#access' => user_access('administer voting api'),
  );

  $form['votingapi']['userpoints_votingapi_vote_karma_positive'] = array(
    '#type' => 'textfield',
    '#title' => t('!Points for author receiving positive votes', userpoints_translation()),
    '#default_value' => variable_get('userpoints_votingapi_vote_karma_positive', 1),
    '#size' => 5,
    '#maxlength' => 5,
  );

  $form['votingapi']['userpoints_votingapi_vote_karma_negative'] = array(
    '#type' => 'textfield',
    '#title' => t('!Points for author receiving negative votes', userpoints_translation()),
    '#default_value' => variable_get('userpoints_votingapi_vote_karma_negative', -1),
    '#size' => 5,
    '#maxlength' => 5,
  );

  // Tweak the display widget amongst the vote_up_down options.
  $form['vud_node_widget'] = array(
    '#title' => t('Voting Widget selection'),
    '#description' => t('Select the voting widget theme that will be displayed.'),
    '#type' => 'radios',
    '#default_value' => variable_get('vud_node_widget', 'updown'),
    '#options' => vud_widget_get_names(),
    '#access' => user_access('administer vote up/down'),
  );

  return system_settings_form($form);
}