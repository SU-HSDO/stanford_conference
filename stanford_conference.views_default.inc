<?php
/**
 * @file
 * stanford_conference.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_conference_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'conferences';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conferences';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Past Conferences';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: RSVP */
  $handler->display->display_options['fields']['field_s_rsvp']['id'] = 'field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['table'] = 'field_data_field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['field'] = 'field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['label'] = '';
  $handler->display->display_options['fields']['field_s_rsvp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_rsvp']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Date -  start date (field_s_date) */
  $handler->display->display_options['sorts']['field_s_date_value']['id'] = 'field_s_date_value';
  $handler->display->display_options['sorts']['field_s_date_value']['table'] = 'field_data_field_s_date';
  $handler->display->display_options['sorts']['field_s_date_value']['field'] = 'field_s_date_value';
  $handler->display->display_options['sorts']['field_s_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_overview' => 'conference_overview',
  );
  /* Filter criterion: Content: Date -  start date (field_s_date) */
  $handler->display->display_options['filters']['field_s_date_value']['id'] = 'field_s_date_value';
  $handler->display->display_options['filters']['field_s_date_value']['table'] = 'field_data_field_s_date';
  $handler->display->display_options['filters']['field_s_date_value']['field'] = 'field_s_date_value';
  $handler->display->display_options['filters']['field_s_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_s_date_value']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Conferences';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Content: RSVP */
  $handler->display->display_options['fields']['field_s_rsvp']['id'] = 'field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['table'] = 'field_data_field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['field'] = 'field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['label'] = '';
  $handler->display->display_options['fields']['field_s_rsvp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_rsvp']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_overview' => 'conference_overview',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Conferences';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '  <div class="event-image">[field_image]</div>';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'conf-image-right';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'sm-square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_s_date']['id'] = 'field_s_date';
  $handler->display->display_options['fields']['field_s_date']['table'] = 'field_data_field_s_date';
  $handler->display->display_options['fields']['field_s_date']['field'] = 'field_s_date';
  $handler->display->display_options['fields']['field_s_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_date']['alter']['text'] = '  <div class="event-date-long">[field_s_date]</div>';
  $handler->display->display_options['fields']['field_s_date']['element_class'] = 'event-date-long';
  $handler->display->display_options['fields']['field_s_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_date']['settings'] = array(
    'format_type' => 'stanford_date_year_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: RSVP */
  $handler->display->display_options['fields']['field_s_rsvp']['id'] = 'field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['table'] = 'field_data_field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['field'] = 'field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['label'] = '';
  $handler->display->display_options['fields']['field_s_rsvp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_rsvp']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;

  /* Display: contact */
  $handler = $view->new_display('block', 'contact', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contact';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_s_contact_email']['id'] = 'field_s_contact_email';
  $handler->display->display_options['fields']['field_s_contact_email']['table'] = 'field_data_field_s_contact_email';
  $handler->display->display_options['fields']['field_s_contact_email']['field'] = 'field_s_contact_email';
  $handler->display->display_options['fields']['field_s_contact_email']['label'] = '';
  $handler->display->display_options['fields']['field_s_contact_email']['element_label_colon'] = FALSE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_s_contact_phone']['id'] = 'field_s_contact_phone';
  $handler->display->display_options['fields']['field_s_contact_phone']['table'] = 'field_data_field_s_contact_phone';
  $handler->display->display_options['fields']['field_s_contact_phone']['field'] = 'field_s_contact_phone';
  $handler->display->display_options['fields']['field_s_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_s_contact_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_overview' => 'conference_overview',
  );

  /* Display: conference Sponsors */
  $handler = $view->new_display('block', 'conference Sponsors', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sponsors';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Sponsors */
  $handler->display->display_options['fields']['field_s_sponsors']['id'] = 'field_s_sponsors';
  $handler->display->display_options['fields']['field_s_sponsors']['table'] = 'field_data_field_s_sponsors';
  $handler->display->display_options['fields']['field_s_sponsors']['field'] = 'field_s_sponsors';
  $handler->display->display_options['fields']['field_s_sponsors']['label'] = '';
  $handler->display->display_options['fields']['field_s_sponsors']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_sponsors']['alter']['text'] = '[field_s_sponsors]
[field_s_sponsors-title] ';
  $handler->display->display_options['fields']['field_s_sponsors']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_sponsors']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_sponsors']['settings'] = array(
    'image_style' => 'sponsor',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_s_sponsors']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_s_sponsors']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_overview' => 'conference_overview',
  );

  /* Display: Map */
  $handler = $view->new_display('block', 'Map', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Map Link */
  $handler->display->display_options['fields']['field_s_event_map_link']['id'] = 'field_s_event_map_link';
  $handler->display->display_options['fields']['field_s_event_map_link']['table'] = 'field_data_field_s_event_map_link';
  $handler->display->display_options['fields']['field_s_event_map_link']['field'] = 'field_s_event_map_link';
  $handler->display->display_options['fields']['field_s_event_map_link']['label'] = '';
  $handler->display->display_options['fields']['field_s_event_map_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_event_map_link']['alter']['text'] = '<a href="[field_s_event_map_link-url]">MAP <i class="icon-map-marker"></i></a>';
  $handler->display->display_options['fields']['field_s_event_map_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_event_map_link']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_overview' => 'conference_overview',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past Conferences';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '  <div class="event-image">[field_image]</div>';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'conf-image-right';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'sm-square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_s_date']['id'] = 'field_s_date';
  $handler->display->display_options['fields']['field_s_date']['table'] = 'field_data_field_s_date';
  $handler->display->display_options['fields']['field_s_date']['field'] = 'field_s_date';
  $handler->display->display_options['fields']['field_s_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_date']['alter']['text'] = '  <div class="event-date-long">[field_s_date]</div>';
  $handler->display->display_options['fields']['field_s_date']['element_class'] = 'event-date-long';
  $handler->display->display_options['fields']['field_s_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_date']['settings'] = array(
    'format_type' => 'stanford_date_year_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: RSVP */
  $handler->display->display_options['fields']['field_s_rsvp']['id'] = 'field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['table'] = 'field_data_field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['field'] = 'field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['label'] = '';
  $handler->display->display_options['fields']['field_s_rsvp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_rsvp']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_overview' => 'conference_overview',
  );
  /* Filter criterion: Content: Date -  start date (field_s_date) */
  $handler->display->display_options['filters']['field_s_date_value']['id'] = 'field_s_date_value';
  $handler->display->display_options['filters']['field_s_date_value']['table'] = 'field_data_field_s_date';
  $handler->display->display_options['filters']['field_s_date_value']['field'] = 'field_s_date_value';
  $handler->display->display_options['filters']['field_s_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_s_date_value']['default_date'] = 'now';

  /* Display: conference featured image */
  $handler = $view->new_display('block', 'conference featured image', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_overview' => 'conference_overview',
  );

  /* Display: curr conference */
  $handler = $view->new_display('block', 'curr conference', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_conference_overview_node']['id'] = 'reverse_field_conference_overview_node';
  $handler->display->display_options['relationships']['reverse_field_conference_overview_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_conference_overview_node']['field'] = 'reverse_field_conference_overview_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '  <div class="event-image">[field_image]</div>';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'conf-image-right';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'sm-square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_s_date']['id'] = 'field_s_date';
  $handler->display->display_options['fields']['field_s_date']['table'] = 'field_data_field_s_date';
  $handler->display->display_options['fields']['field_s_date']['field'] = 'field_s_date';
  $handler->display->display_options['fields']['field_s_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_date']['alter']['text'] = '  <div class="event-date-long">[field_s_date]</div>';
  $handler->display->display_options['fields']['field_s_date']['element_class'] = 'event-date-long';
  $handler->display->display_options['fields']['field_s_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_date']['settings'] = array(
    'format_type' => 'stanford_date_year_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: RSVP */
  $handler->display->display_options['fields']['field_s_rsvp']['id'] = 'field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['table'] = 'field_data_field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['field'] = 'field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['label'] = '';
  $handler->display->display_options['fields']['field_s_rsvp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_rsvp']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block 8 */
  $handler = $view->new_display('block', 'Block 8', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'border';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Conference Overview (field_conference_overview) */
  $handler->display->display_options['arguments']['field_conference_overview_target_id']['id'] = 'field_conference_overview_target_id';
  $handler->display->display_options['arguments']['field_conference_overview_target_id']['table'] = 'field_data_field_conference_overview';
  $handler->display->display_options['arguments']['field_conference_overview_target_id']['field'] = 'field_conference_overview_target_id';
  $handler->display->display_options['arguments']['field_conference_overview_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_conference_overview_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_conference_overview_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_conference_overview_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_conference_overview_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_agenda' => 'conference_agenda',
  );

  /* Display: curr conference agenda page */
  $handler = $view->new_display('block', 'curr conference agenda page', 'block_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_conference_overview_target_id']['id'] = 'field_conference_overview_target_id';
  $handler->display->display_options['relationships']['field_conference_overview_target_id']['table'] = 'field_data_field_conference_overview';
  $handler->display->display_options['relationships']['field_conference_overview_target_id']['field'] = 'field_conference_overview_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_conference_overview_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '  <div class="event-image">[field_image]</div>';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'conf-image-right';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'sm-square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_conference_overview_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_s_date']['id'] = 'field_s_date';
  $handler->display->display_options['fields']['field_s_date']['table'] = 'field_data_field_s_date';
  $handler->display->display_options['fields']['field_s_date']['field'] = 'field_s_date';
  $handler->display->display_options['fields']['field_s_date']['relationship'] = 'field_conference_overview_target_id';
  $handler->display->display_options['fields']['field_s_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_date']['alter']['text'] = '  <div class="event-date-long">[field_s_date]</div>';
  $handler->display->display_options['fields']['field_s_date']['element_class'] = 'event-date-long';
  $handler->display->display_options['fields']['field_s_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_date']['settings'] = array(
    'format_type' => 'stanford_date_year_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: RSVP */
  $handler->display->display_options['fields']['field_s_rsvp']['id'] = 'field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['table'] = 'field_data_field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['field'] = 'field_s_rsvp';
  $handler->display->display_options['fields']['field_s_rsvp']['relationship'] = 'field_conference_overview_target_id';
  $handler->display->display_options['fields']['field_s_rsvp']['label'] = '';
  $handler->display->display_options['fields']['field_s_rsvp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_rsvp']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_agenda' => 'conference_agenda',
  );
  $export['conferences'] = $view;

  return $export;
}
