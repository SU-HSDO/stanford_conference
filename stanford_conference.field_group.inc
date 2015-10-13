<?php
/**
 * @file
 * stanford_conference.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_conference_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_descriptors|node|conference_overview|default';
  $field_group->group_name = 'group_descriptors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'conference_overview';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Descriptors',
    'weight' => '0',
    'children' => array(
      0 => 'field_stanford_event_location',
      1 => 'field_s_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Descriptors',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'descriptor',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_descriptors|node|conference_overview|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rsvp_button|node|conference_overview|default';
  $field_group->group_name = 'group_rsvp_button';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'conference_overview';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'RSVP Button',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_rsvp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'RSVP Button',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_rsvp_button|node|conference_overview|default'] = $field_group;

  return $export;
}
