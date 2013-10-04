<?php

class custom_view_field_handler_field_lorem_sentence extends views_handler_field {

	function __construct() {
		parent::construct();
	}

	function query() {
      // Do nothing - this field does not alter the query
	}

	function render($values) {
		return "Lorem ipsum ".$values->node_type." dolor sit amet, consectetur adipisicing elit, sed do eiusmod.";
	}

}