<?php
/**
 * @file
 * job_opportunities.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function job_opportunities_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_job_opportunity';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_job_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_job_opportunity';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_job_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_job_opportunity';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_job_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_job_opportunity';
  $strongarm->value = '1';
  $export['node_preview_job_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_job_opportunity';
  $strongarm->value = 0;
  $export['node_submitted_job_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_job_opportunity_pattern';
  $strongarm->value = 'job-opportunities/[node:title]';
  $export['pathauto_node_job_opportunity_pattern'] = $strongarm;

  return $export;
}
