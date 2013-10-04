<?php

class custom_view_field_handler_field_lorem_paragraph extends views_handler_field {

	function __construct() {
		parent::construct();
	}

	function query() {
      // Do nothing - this field does not alter the query
	}


	function render($values) {
		return "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod
tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,
quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo
consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse
cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non
proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	}

}