<?php

/**
 * @file
 * Default view for Platform Content administration.
 */

$view = new view();
$view->name = 'og_sm_content_platform_admin_overview';
$view->description = 'Show all content (nodes) of a Sites under your management.';
$view->tag = 'og_sm';
$view->base_table = 'node';
$view->human_name = 'Administer Platform content';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Administer content';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['link_display'] = 'custom_url';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access platform overview pages';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Submit';
$handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Ascending';
$handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Descending';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'title' => 'title',
  'type' => 'type',
  'title_1' => 'title_1',
  'status' => 'status',
  'created' => 'created',
  'changed' => 'changed',
  'name' => 'name',
  'edit_node' => 'edit_node',
  'delete_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'type' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title_1' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'status' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'changed' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '&emsp;',
    'empty_column' => 0,
  ),
  'delete_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['style_options']['empty_table'] = TRUE;
/* Header: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['ui_name'] = 'Result summary';
$handler->display->display_options['header']['result']['label'] = 'Results';
$handler->display->display_options['header']['result']['content'] = 'Show @start - @end of @total';
/* Footer: Result summary */
$handler->display->display_options['footer']['result']['id'] = 'result';
$handler->display->display_options['footer']['result']['table'] = 'views';
$handler->display->display_options['footer']['result']['field'] = 'result';
$handler->display->display_options['footer']['result']['ui_name'] = 'Result summary';
$handler->display->display_options['footer']['result']['content'] = 'Show @start - @end of @total';
/* No results behavior: No results */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['ui_name'] = 'No results';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'There is no content in any of your sites.';
$handler->display->display_options['empty']['area']['format'] = 'plain_text';
/* Relationship: Site membership from node */
$handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
$handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
$handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
$handler->display->display_options['relationships']['og_membership_rel']['ui_name'] = 'Site membership from node';
$handler->display->display_options['relationships']['og_membership_rel']['label'] = 'Site membership';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
$handler->display->display_options['relationships']['og_group_ref_target_id']['table'] = 'og_membership';
$handler->display->display_options['relationships']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
$handler->display->display_options['relationships']['og_group_ref_target_id']['relationship'] = 'og_membership_rel';
$handler->display->display_options['relationships']['og_group_ref_target_id']['label'] = 'Node entity referenced from og_group_ref';
/* Field: Bulk operations */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['ui_name'] = 'Bulk operations';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::node_assign_owner_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        'title' => 'title',
        'status' => 'status',
        'activity::field_tags' => 'activity::field_tags',
        'blogpost::field_tags' => 'blogpost::field_tags',
        'idea::field_tags' => 'idea::field_tags',
        'news::field_tags' => 'news::field_tags',
      ),
    ),
  ),
  'action::node_publish_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpublish_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
/* Field: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['ui_name'] = 'Title';
$handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
/* Field: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['ui_name'] = 'Type';
$handler->display->display_options['fields']['type']['display_site_node_type'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'og_group_ref_target_id';
$handler->display->display_options['fields']['title_1']['label'] = 'Site';
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
/* Field: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['ui_name'] = 'Published';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Created */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['ui_name'] = 'Created';
$handler->display->display_options['fields']['created']['label'] = 'Created';
$handler->display->display_options['fields']['created']['date_format'] = 'short';
$handler->display->display_options['fields']['created']['second_date_format'] = 'short';
/* Field: Updated */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['ui_name'] = 'Updated';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'short';
/* Field: Author */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['ui_name'] = 'Author';
$handler->display->display_options['fields']['name']['label'] = 'Author';
/* Field: Actions : Edit */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['ui_name'] = 'Actions : Edit';
$handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
$handler->display->display_options['fields']['edit_node']['element_type'] = 'span';
$handler->display->display_options['fields']['edit_node']['element_class'] = 'button';
/* Field: Actions : Delete */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['ui_name'] = 'Actions : Delete';
$handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
/* Sort criterion: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['ui_name'] = 'Created date';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['expose']['label'] = 'Created';
/* Sort criterion: Updated */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['ui_name'] = 'Updated';
$handler->display->display_options['sorts']['changed']['expose']['label'] = 'Updated';
/* Filter criterion: Site membership */
$handler->display->display_options['filters']['group_type']['id'] = 'group_type';
$handler->display->display_options['filters']['group_type']['table'] = 'og_membership';
$handler->display->display_options['filters']['group_type']['field'] = 'group_type';
$handler->display->display_options['filters']['group_type']['relationship'] = 'og_membership_rel';
$handler->display->display_options['filters']['group_type']['ui_name'] = 'Site membership';
$handler->display->display_options['filters']['group_type']['value'] = array(
  'node' => 'node',
);
$handler->display->display_options['filters']['group_type']['group'] = 1;
/* Filter criterion: Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['ui_name'] = 'Status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
);
/* Filter criterion: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['ui_name'] = 'Title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
);
/* Filter criterion: Site content type */
$handler->display->display_options['filters']['og_sm_content_type']['id'] = 'og_sm_content_type';
$handler->display->display_options['filters']['og_sm_content_type']['table'] = 'node';
$handler->display->display_options['filters']['og_sm_content_type']['field'] = 'og_sm_content_type';
$handler->display->display_options['filters']['og_sm_content_type']['ui_name'] = 'Site content type';
$handler->display->display_options['filters']['og_sm_content_type']['group'] = 1;
$handler->display->display_options['filters']['og_sm_content_type']['exposed'] = TRUE;
$handler->display->display_options['filters']['og_sm_content_type']['expose']['operator_id'] = 'og_sm_content_type_op';
$handler->display->display_options['filters']['og_sm_content_type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['og_sm_content_type']['expose']['operator'] = 'og_sm_content_type_op';
$handler->display->display_options['filters']['og_sm_content_type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['og_sm_content_type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
);
/* Filter criterion: OG membership: Site */
$handler->display->display_options['filters']['og_sm_sites']['id'] = 'og_sm_sites';
$handler->display->display_options['filters']['og_sm_sites']['table'] = 'og_membership';
$handler->display->display_options['filters']['og_sm_sites']['field'] = 'og_sm_sites';
$handler->display->display_options['filters']['og_sm_sites']['group'] = 1;
$handler->display->display_options['filters']['og_sm_sites']['exposed'] = TRUE;
$handler->display->display_options['filters']['og_sm_sites']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['og_sm_sites']['expose']['label'] = 'Site';
$handler->display->display_options['filters']['og_sm_sites']['expose']['operator'] = 'og_sm_sites_op';
$handler->display->display_options['filters']['og_sm_sites']['expose']['identifier'] = 'site';
$handler->display->display_options['filters']['og_sm_sites']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
  10 => 0,
  6 => 0,
  9 => 0,
  7 => 0,
);
$handler->display->display_options['filters']['og_sm_sites']['manageable_sites'] = 1;
/* Filter criterion: Author */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'uid';
$handler->display->display_options['filters']['uid']['ui_name'] = 'Author';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['group'] = 1;
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
);
/* Filter criterion: OG membership: Manageable sites by current user */
$handler->display->display_options['filters']['og_sm_manageable_sites_by_current_user']['id'] = 'og_sm_manageable_sites_by_current_user';
$handler->display->display_options['filters']['og_sm_manageable_sites_by_current_user']['table'] = 'og_membership';
$handler->display->display_options['filters']['og_sm_manageable_sites_by_current_user']['field'] = 'og_sm_manageable_sites_by_current_user';
$handler->display->display_options['filters']['og_sm_manageable_sites_by_current_user']['value'] = '1';
$handler->display->display_options['filters']['og_sm_manageable_sites_by_current_user']['group'] = 1;

/* Display: Overview */
$handler = $view->new_display('page', 'Overview', 'overview');
$handler->display->display_options['path'] = 'admin/content/platform';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Platform content';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'management';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

$translatables['og_sm_content_platform_admin_overview'] = array(
  t('Defaults'),
  t('Administer content'),
  t('more'),
  t('Submit'),
  t('Reset'),
  t('Sort by'),
  t('Ascending'),
  t('Descending'),
  t('Items per page'),
  t('- All -'),
  t('Start'),
  t('« first'),
  t('‹ previous'),
  t('next ›'),
  t('last »'),
  t('Results'),
  t('Show @start - @end of @total'),
  t('There is no content in any of your sites.'),
  t('Site membership'),
  t('author'),
  t('Node entity referenced from og_group_ref'),
  t('Content'),
  t('- Choose an operation -'),
  t('Title'),
  t('Type'),
  t('Site'),
  t('Published'),
  t('Created'),
  t('Updated date'),
  t('Author'),
  t('Actions'),
  t('Delete'),
  t('Updated'),
  t('Overview'),
);