<?php
/**
 * @file
 * my_vars_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function my_vars__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
