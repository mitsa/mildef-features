<?php
/**
 * @file
 * sida.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function sida_image_default_styles() {
  $styles = array();

  // Exported image style: page_header.
  $styles['page_header'] = array(
    'name' => 'page_header',
    'effects' => array(),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function sida_node_info() {
  $items = array(
    'page' => array(
      'name' => t('sida'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
