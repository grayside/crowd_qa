<?php

/**
 * Implementation of hook_content_default_fields().
 */
function crowd_qa_content_default_fields() {
  module_load_include('inc', 'crowd_qa', 'crowd_qa.defaults');
  $args = func_get_args();
  return call_user_func_array('_crowd_qa_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function crowd_qa_context_default_contexts() {
  module_load_include('inc', 'crowd_qa', 'crowd_qa.defaults');
  $args = func_get_args();
  return call_user_func_array('_crowd_qa_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function crowd_qa_ctools_plugin_api() {
  module_load_include('inc', 'crowd_qa', 'crowd_qa.defaults');
  $args = func_get_args();
  return call_user_func_array('_crowd_qa_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function crowd_qa_node_info() {
  module_load_include('inc', 'crowd_qa', 'crowd_qa.features.node');
  $args = func_get_args();
  return call_user_func_array('_crowd_qa_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function crowd_qa_strongarm() {
  module_load_include('inc', 'crowd_qa', 'crowd_qa.defaults');
  $args = func_get_args();
  return call_user_func_array('_crowd_qa_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function crowd_qa_views_default_views() {
  module_load_include('inc', 'crowd_qa', 'crowd_qa.features.views');
  $args = func_get_args();
  return call_user_func_array('_crowd_qa_views_default_views', $args);
}
