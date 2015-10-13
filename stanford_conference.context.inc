<?php
/**
 * @file
 * stanford_conference.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_conference_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'conference_agenda_blocks';
  $context->description = '';
  $context->tag = 'Conferences';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'conference_agenda' => 'conference_agenda',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-conferences-block_9' => array(
          'module' => 'views',
          'delta' => 'conferences-block_9',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Conferences');
  $export['conference_agenda_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'conference_overview_blocks';
  $context->description = '';
  $context->tag = 'Conferences';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'conference_overview' => 'conference_overview',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-conferences-block_8' => array(
          'module' => 'views',
          'delta' => 'conferences-block_8',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-conferences-block_5' => array(
          'module' => 'views',
          'delta' => 'conferences-block_5',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'views-conferences-block_2' => array(
          'module' => 'views',
          'delta' => 'conferences-block_2',
          'region' => 'sidebar_second',
          'weight' => '-83',
        ),
        'views-conferences-block_3' => array(
          'module' => 'views',
          'delta' => 'conferences-block_3',
          'region' => 'sidebar_second',
          'weight' => '-82',
        ),
        'views-conferences-block_4' => array(
          'module' => 'views',
          'delta' => 'conferences-block_4',
          'region' => 'sidebar_second',
          'weight' => '-81',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Conferences');
  $export['conference_overview_blocks'] = $context;

  return $export;
}
