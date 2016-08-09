<?php

/**
 * @file
 * Page callbacks and their helpers.
 */

/**
 * Page callback to redirect the clone tab to the node/clone/* URL.
 *
 * @param object $site_original
 *   The node to clone.
 */
function og_sm_site_clone_node_redirect($site_original) {
  drupal_goto('node/clone/' . $site_original->nid);
}

/**
 * Page callback to render the clone form.
 *
 * @param object $site_original
 *   The site to clone from.
 *
 * @return array
 *   The node form.
 */
function og_sm_site_clone_node_form($site_original) {
  drupal_set_title(t('Clone @site', array('@site' => $site_original->title)));

  // Create the new Site object based on the existing.
  $site_new = og_sm_site_clone_object_prepare($site_original);

  // Create the default form state and add the original site to it.
  $form_state = array();
  $form_state['build_info']['args'] = array($site_new);
  $form_state['site_original'] = $site_original;

  // Make sure the file defining the node form is loaded.
  form_load_include($form_state, 'inc', 'node', 'node.pages');

  // Build the node form based on the new Site.
  return drupal_build_form($site_new->type . '_node_form', $form_state);
}