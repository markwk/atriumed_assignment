<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atriumed_assignment_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'assignment';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'assignment' => 'assignment',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '*/submissions' => '*/submissions',
        '*/mysubmission' => '*/mysubmission',
      ),
    ),
    'views' => array(
      'values' => array(
        'assignments:page_1' => 'assignments:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-assignments-block_1' => array(
          'module' => 'views',
          'delta' => 'assignments-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-assignments-block_2' => array(
          'module' => 'views',
          'delta' => 'assignments-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'menu' => 'assignments',
  );
  $context->condition_mode = 0;
  $export['assignment'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'submissions';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'submission' => 'submission',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'diff-inline' => array(
          'module' => 'diff',
          'delta' => 'inline',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'assignments',
  );
  $context->condition_mode = 0;
  $export['submissions'] = $context;

  return $export;
}
