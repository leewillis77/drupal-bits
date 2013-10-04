<?php

/**
 * Implements hook_views_data()
 */
function custom_view_field_views_data() {
  $data = array();
  $data['custom_view_field'] = array(
  	'table' => array (
  	  'group' => t('Custom'),
  	  'join' => array ( '#global' => array() ),
  	 ),
  	'lorem_sentence' => array(
      'title' => t('Lorem Ipsum sentence.'),
      'help' => t('Provides lorem ipsum text sentence.'),
      'field' => array ( 
      	'handler' => 'custom_view_field_handler_field_lorem_sentence',
        'click sortable' => TRUE,
      	),
    ),
    'lorem_paragraph' => array(
      'title' => t('Lorem Ipsum Paragraph'),
      'help' => t('Provides lorem ipsum paragraph.'),
      'field' => array ( 
      	'handler' => 'custom_view_field_handler_field_lorem_paragraph',
        'click sortable' => TRUE,
      ),
    ),
  );
  return $data;
 }