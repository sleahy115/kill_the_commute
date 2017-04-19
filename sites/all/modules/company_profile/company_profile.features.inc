<?php
/**
 * @file
 * company_profile.features.inc
 */

/**
 * Implements hook_node_info().
 */
function company_profile_node_info() {
  $items = array(
    'company_profile' => array(
      'name' => t('Company Profile'),
      'base' => 'node_content',
      'description' => t('A content type for holding company information.'),
      'has_title' => '1',
      'title_label' => t('Company Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
