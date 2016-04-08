<?php
/**
 * @file
 * API documentation about the og_sm_path module.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Act on the fact that the Site path changed for a Site node.
 *
 * Every Site node gets a Site path. When the value of that path changes this
 * hook is triggered so other parts of the platform can respond to that change.
 *
 * Can be used to trigger a batch to update all alliases for the Site.
 * Example code from @see og_sm_path_og_sm_site_path_change().
 *
 * The hook can be put in the yourmodule.module OR in the yourmodule.og_sm.inc
 * file. The recommended place is in the yourmodule.og_sm.inc file as it keeps
 * your .module file cleaner and makes the platform load less code by default.
 *
 * @param object $site
 *   The Site for who the Site path changed.
 */
function hook_og_sm_site_path_change($site) {
  // Update all aliases for the Site when its alias changes.
  module_load_include('inc', 'og_sm_path', 'og_sm_path.batch');
  og_sm_path_site_alias_update_batch($site);
}


/**
 * @} End of "addtogroup hooks".
 */