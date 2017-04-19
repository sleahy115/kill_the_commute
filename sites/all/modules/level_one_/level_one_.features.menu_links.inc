<?php
/**
 * @file
 * level_one_.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function level_one__menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_level-one-testing-:level-one-testing-.
  $menu_links['main-menu_level-one-testing-:level-one-testing-'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'level-one-testing-',
    'router_path' => 'level-one-testing-',
    'link_title' => 'level one testing ',
    'options' => array(
      'identifier' => 'main-menu_level-one-testing-:level-one-testing-',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('level one testing ');

  return $menu_links;
}
