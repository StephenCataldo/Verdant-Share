<?php
/* And the view, originally an export
				tips: http://drupal.org/node/685432 */
	// replaced with line below... $view = new view;
	// Create a new view
function _verdant_share_views_default_views() {

	$view = new view;
	//$view = views_new_view();


	// define the view with code form an export (will be modified?)
	// change name...
	$view->name = 'verdant_module_rideshare2';
	$view->description = 'Rideshare View';
	$view->tag = 'share';
	$view->view_php = '';
	$view->base_table = 'node';
	$view->is_cacheable = FALSE;
	$view->api_version = 2;
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially, otherwise automatically enabled */
	$handler = $view->new_display('default', 'Defaults', 'default');
	$handler->override_option('title', 'Share the Ride'); // new, working?!!!
	$handler->override_option('relationships', array(
		'flag_content_rel' => array(
			'label' => 'Favorite?',
			'required' => 0,
			'flag' => 'share_prefer',
			'user_scope' => 'current',
			'id' => 'flag_content_rel',
			'table' => 'node',
			'field' => 'flag_content_rel',
			'override' => array(
				'button' => 'Override',
			),
			'relationship' => 'none',
		),
		'flag_content_rel_1' => array(
			'label' => 'Remove?',
			'required' => 0,
			'flag' => 'share_remove',
			'user_scope' => 'current',
			'id' => 'flag_content_rel_1',
			'table' => 'node',
			'field' => 'flag_content_rel',
			'relationship' => 'none',
		),
	));
	$handler->override_option('fields', array(
		'picture' => array(
			'label' => 'Picture',
			'alter' => array(
				'alter_text' => 0,
				'text' => '',
				'make_link' => 0,
				'path' => '',
				'link_class' => '',
				'alt' => '',
				'prefix' => '',
				'suffix' => '',
				'target' => '',
				'help' => '',
				'trim' => 0,
				'max_length' => '',
				'word_boundary' => 1,
				'ellipsis' => 1,
				'strip_tags' => 0,
				'html' => 0,
			),
			'empty' => '',
			'hide_empty' => 0,
			'empty_zero' => 0,
			'imagecache_preset' => '3',
			'exclude' => 0,
			'id' => 'picture',
			'table' => 'users',
			'field' => 'picture',
			'relationship' => 'none',
		),
		'name' => array(
			'label' => 'Name',
			'alter' => array(
				'alter_text' => 0,
				'text' => '',
				'make_link' => 0,
				'path' => '',
				'link_class' => '',
				'alt' => '',
				'prefix' => '',
				'suffix' => '',
				'target' => '',
				'help' => '',
				'trim' => 0,
				'max_length' => '',
				'word_boundary' => 1,
				'ellipsis' => 1,
				'strip_tags' => 0,
				'html' => 0,
			),
			'empty' => '',
			'hide_empty' => 0,
			'empty_zero' => 0,
			'link_to_user' => 1,
			'overwrite_anonymous' => 0,
			'anonymous_text' => '',
			'exclude' => 0,
			'id' => 'name',
			'table' => 'users',
			'field' => 'name',
			'relationship' => 'none',
		),
		'contact' => array(
			'label' => 'Contact',
			'alter' => array(
				'alter_text' => 1,
				'text' => '<div class="contact-share">[contact]</div>',
				'make_link' => 0,
				'path' => '',
				'link_class' => '',
				'alt' => '',
				'prefix' => '',
				'suffix' => '',
				'target' => '',
				'help' => '',
				'trim' => 0,
				'max_length' => '',
				'word_boundary' => 1,
				'ellipsis' => 1,
				'strip_tags' => 0,
				'html' => 0,
			),
			'empty' => '',
			'hide_empty' => 0,
			'empty_zero' => 0,
			'text' => 'contact',
			'link_display' => 'icon',
			'exclude' => 0,
			'id' => 'contact',
			'table' => 'users',
			'field' => 'contact',
			'relationship' => 'none',
			'override' => array(
				'button' => 'Override',
			),
		),
		'field_arrival_time_value' => array(
			'label' => 'Arrive',
			'alter' => array(
				'alter_text' => 0,
				'text' => '',
				'make_link' => 0,
				'path' => '',
				'link_class' => '',
				'alt' => '',
				'prefix' => '',
				'suffix' => '',
				'target' => '',
				'help' => '',
				'trim' => 0,
				'max_length' => '',
				'word_boundary' => 1,
				'ellipsis' => 1,
				'strip_tags' => 0,
				'html' => 0,
			),
			'empty' => '',
			'hide_empty' => 0,
			'empty_zero' => 0,
			'link_to_node' => 0,
			'label_type' => 'custom',
			'format' => 'default',
			'multiple' => array(
				'group' => TRUE,
				'multiple_number' => '',
				'multiple_from' => '',
				'multiple_reversed' => FALSE,
			),
			'exclude' => 0,
			'repeat' => array(
				'show_repeat_rule' => '',
			),
			'fromto' => array(
				'fromto' => 'both',
			),
			'id' => 'field_arrival_time_value',
			'table' => 'node_data_field_arrival_time',
			'field' => 'field_arrival_time_value',
			'relationship' => 'none',
			'override' => array(
				'button' => 'Override',
			),
		),
		'field_departure_time_value' => array(
			'label' => 'Depart',
			'alter' => array(
				'alter_text' => 0,
				'text' => '',
				'make_link' => 0,
				'path' => '',
				'link_class' => '',
				'alt' => '',
				'prefix' => '',
				'suffix' => '',
				'target' => '',
				'help' => '',
				'trim' => 0,
				'max_length' => '',
				'word_boundary' => 1,
				'ellipsis' => 1,
				'strip_tags' => 0,
				'html' => 0,
			),
			'empty' => '',
			'hide_empty' => 0,
			'empty_zero' => 0,
			'link_to_node' => 0,
			'label_type' => 'custom',
			'format' => 'default',
			'multiple' => array(
				'multiple_number' => '',
				'multiple_from' => '',
				'multiple_to' => '',
				'group' => TRUE,
			),
			'repeat' => array(
				'show_repeat_rule' => '',
			),
			'fromto' => array(
				'fromto' => 'both',
			),
			'exclude' => 0,
			'id' => 'field_departure_time_value',
			'table' => 'node_data_field_departure_time',
			'field' => 'field_departure_time_value',
			'relationship' => 'none',
			'override' => array(
				'button' => 'Override',
			),
		),
		'city' => array(
			'label' => 'City',
			'alter' => array(
				'alter_text' => 0,
				'text' => '',
				'make_link' => 0,
				'path' => '',
				'link_class' => '',
				'alt' => '',
				'prefix' => '',
				'suffix' => '',
				'target' => '',
				'help' => '',
				'trim' => 0,
				'max_length' => '',
				'word_boundary' => 1,
				'ellipsis' => 1,
				'strip_tags' => 0,
				'html' => 0,
			),
			'empty' => '',
			'hide_empty' => 0,
			'empty_zero' => 0,
			'exclude' => 0,
			'id' => 'city',
			'table' => 'location',
			'field' => 'city',
			'override' => array(
				'button' => 'Override',
			),
			'relationship' => 'none',
		),
		'distance' => array(
			'label' => 'Distance',
			'alter' => array(
				'alter_text' => 0,
				'text' => '',
				'make_link' => 0,
				'path' => '',
				'link_class' => '',
				'alt' => '',
				'prefix' => '',
				'suffix' => '',
				'target' => '',
				'help' => '',
				'trim' => 0,
				'max_length' => '',
				'word_boundary' => 1,
				'ellipsis' => 1,
				'strip_tags' => 0,
				'html' => 0,
			),
			'empty' => '',
			'hide_empty' => 0,
			'empty_zero' => 0,
			'origin' => 'user',
			'units' => 'km',
			'latitude' => '',
			'longitude' => '',
			'exclude' => 0,
			'id' => 'distance',
			'table' => 'location',
			'field' => 'distance',
			'override' => array(
				'button' => 'Override',
			),
			'relationship' => 'none',
		),
		'created' => array(
			'label' => 'Post date',
			'alter' => array(
				'alter_text' => 0,
				'text' => '',
				'make_link' => 0,
				'path' => '',
				'link_class' => '',
				'alt' => '',
				'prefix' => '',
				'suffix' => '',
				'target' => '',
				'help' => '',
				'trim' => 0,
				'max_length' => '',
				'word_boundary' => 1,
				'ellipsis' => 1,
				'strip_tags' => 0,
				'html' => 0,
			),
			'empty' => '',
			'hide_empty' => 0,
			'empty_zero' => 0,
			'date_format' => 'raw time ago',
			'custom_date_format' => '',
			'exclude' => 0,
			'id' => 'created',
			'table' => 'node',
			'field' => 'created',
			'override' => array(
				'button' => 'Override',
			),
			'relationship' => 'none',
		),
		'tid' => array(
			'label' => 'All terms',
			'alter' => array(
				'alter_text' => 0,
				'text' => '',
				'make_link' => 0,
				'path' => '',
				'link_class' => '',
				'alt' => '',
				'prefix' => '',
				'suffix' => '',
				'target' => '',
				'help' => '',
				'trim' => 0,
				'max_length' => '',
				'word_boundary' => 1,
				'ellipsis' => 1,
				'strip_tags' => 0,
				'html' => 0,
			),
			'empty' => '',
			'hide_empty' => 0,
			'empty_zero' => 0,
			'type' => 'separator',
			'separator' => ', ',
			'link_to_taxonomy' => 1,
			'limit' => 1,
			'vids' => array(
				'1' => 1,
			),
			'exclude' => 0,
			'id' => 'tid',
			'table' => 'term_node',
			'field' => 'tid',
			'relationship' => 'none',
		),
		'ops' => array(
			'label' => 'Flag link',
			'alter' => array(
				'alter_text' => 0,
				'text' => '',
				'make_link' => 0,
				'path' => '',
				'link_class' => '',
				'alt' => '',
				'prefix' => '',
				'suffix' => '',
				'target' => '',
				'help' => '',
				'trim' => 0,
				'max_length' => '',
				'word_boundary' => 1,
				'ellipsis' => 1,
				'strip_tags' => 0,
				'html' => 0,
			),
			'empty' => '',
			'hide_empty' => 0,
			'empty_zero' => 0,
			'link_type' => '',
			'exclude' => 0,
			'id' => 'ops',
			'table' => 'flag_content',
			'field' => 'ops',
			'relationship' => 'flag_content_rel',
			'override' => array(
				'button' => 'Override',
			),
		),
		'ops_1' => array(
			'label' => 'Flag link',
			'alter' => array(
				'alter_text' => 0,
				'text' => '',
				'make_link' => 0,
				'path' => '',
				'link_class' => '',
				'alt' => '',
				'prefix' => '',
				'suffix' => '',
				'target' => '',
				'help' => '',
				'trim' => 0,
				'max_length' => '',
				'word_boundary' => 1,
				'ellipsis' => 1,
				'strip_tags' => 0,
				'html' => 0,
			),
			'empty' => '',
			'hide_empty' => 0,
			'empty_zero' => 0,
			'link_type' => '',
			'exclude' => 0,
			'id' => 'ops_1',
			'table' => 'flag_content',
			'field' => 'ops',
			'relationship' => 'flag_content_rel_1',
			'override' => array(
				'button' => 'Override',
			),
		),
	));
	$handler->override_option('sorts', array(
		'timestamp' => array(
			'order' => 'DESC',
			'granularity' => 'year',
			'id' => 'timestamp',
			'table' => 'flag_content',
			'field' => 'timestamp',
			'relationship' => 'flag_content_rel',
		),
		'timestamp_1' => array(
			'order' => 'ASC',
			'granularity' => 'year',
			'id' => 'timestamp_1',
			'table' => 'flag_content',
			'field' => 'timestamp',
			'relationship' => 'flag_content_rel_1',
		),
	));
	$handler->override_option('filters', array(
		'status' => array(
			'operator' => '=',
			'value' => '1',
			'group' => '0',
			'exposed' => FALSE,
			'expose' => array(
				'operator' => FALSE,
				'label' => '',
			),
			'id' => 'status',
			'table' => 'node',
			'field' => 'status',
			'relationship' => 'none',
		),
		'type' => array(
			'operator' => 'in',
			'value' => array(
				'share_ride' => 'share_ride',
			),
			'group' => '0',
			'exposed' => FALSE,
			'expose' => array(
				'operator' => FALSE,
				'label' => '',
			),
			'id' => 'type',
			'table' => 'node',
			'field' => 'type',
			'relationship' => 'none',
			    'override' => array(    // cataldo -- added from export later?
						      'button' => 'Override',
									    ),
		),
		'field_arrival_time_value_many_to_one' => array(
			'operator' => 'or',
			'value' => $my_arrival_time,  /* set default to my arrival time  */
			'group' => '0',
			'exposed' => TRUE,
			'expose' => array(
				'use_operator' => 0,
				'operator' => 'field_arrival_time_value_many_to_one_op',
				'identifier' => 'field_arrival_time_value_many_to_one',
				'label' => 'Arrival',
				'optional' => 1,
				'single' => 0,
				'remember' => 0,
				'reduce' => 0,
			),
			'id' => 'field_arrival_time_value_many_to_one',
			'table' => 'node_data_field_arrival_time',
			'field' => 'field_arrival_time_value_many_to_one',
			'override' => array(
				'button' => 'Override',
			),
			'relationship' => 'none',
			'reduce_duplicates' => 1,
		),
		'field_departure_time_value_many_to_one' => array(
			'operator' => 'or',
			'value' => $my_departure_time,
			'group' => '0',
			'exposed' => TRUE,
			'expose' => array(
				'use_operator' => 0,
				'operator' => 'field_departure_time_value_many_to_one_op',
				'identifier' => 'field_departure_time_value_many_to_one',
				'label' => 'Departures',
				'optional' => 1,
				'single' => 0,
				'remember' => 0,
				'reduce' => 0,
			),
			'id' => 'field_departure_time_value_many_to_one',
			'table' => 'node_data_field_departure_time',
			'field' => 'field_departure_time_value_many_to_one',
			'relationship' => 'none',
			'reduce_duplicates' => 1,
						// adding override by hand, to duplicate arrival 
			      'override' => array(
							        'button' => 'Override',
											      ),

		),
		'flagged' => array(
			'operator' => '=',
			'value' => 'All', //'Any', // !!! was 1, meaning true?
			'group' => '0',
			'exposed' => TRUE,
			'expose' => array(
				'operator' => '',
				'identifier' => 'flagged_favorites',
				'label' => 'Favorites',
				'optional' => 1,
				'remember' => 1,    // !!! 1
			),
			'id' => 'flagged',
			'table' => 'flag_content',
			'field' => 'flagged',
			'relationship' => 'flag_content_rel',
			    'override' => array(     // added later
						      'button' => 'Override',
									    ),
		),
		'flagged_1' => array(
			'operator' => '=',
			'value' => '0',
			'group' => '0',
			'exposed' => TRUE,
			'expose' => array(
				'operator' => '',
				'identifier' => 'unflagged_remove',
				'label' => 'Removed',
				'optional' => 1,
				'remember' => 1,
			),
			'id' => 'flagged_1',
			'table' => 'flag_content',
			'field' => 'flagged',
			'relationship' => 'flag_content_rel_1',
		),
	));
	$handler->override_option('access', array(
		'type' => 'none',
	));
	$handler->override_option('cache', array(
		'type' => 'none',
	));
	$handler->override_option('exposed_block', TRUE);
	$handler->override_option('header', 'Click on a heading such as "Arrive" to sort by that column.  Or use the last column to prioritize matches for the next time you come back to this page.

	<a href="/share/flight_taxi">All</a> | <a href="/share/flight_taxi/arrival">Matching Arrivals</a> | <a href="/share/flight_taxi/departure">Matching Departures</a> | <a href="http://maps.google.com/maps?f=d&source=s_d&saddr=san+francisco+international+airport&daddr=747+Howard+Street,+San+Francisco,+CA+94103+(Moscone+Center)&geocode=FXf2PQIdJXq0-ClxCPF-63ePgDGNDUHiLZbXlQ%3BCQ7Kh9H-ZD7fFVOKQAIdQU20-CFoS2zSNh8BvSmxZCp9h4CFgDE4t-jNRQDQdg&hl=en&mra=pe&mrcr=0&dirflg=r&ttype=dep&date=02%2F08%2F10&time=12:01am&noexp=0&noal=0&sort=&sll=37.704149,-122.405734&sspn=0.221651,0.617294&ie=UTF8&ll=37.700664,-122.429581&spn=0.22166,0.617294&z=11&start=0">SFO Public Transit directions</a> ');
	$handler->override_option('header_format', '1');
	$handler->override_option('header_empty', 0);
	$handler->override_option('empty', '<div class="message verdant-message">There are no matches for your current search choices.  <br/>Expand your selection choices above, or come back later.</div>');
	$handler->override_option('empty_format', '3');
	$handler->override_option('items_per_page', 0);
	$handler->override_option('style_plugin', 'gmap');
	$handler->override_option('style_options', array(
		'grouping' => '',
		'macro' => '[gmap ]',
		'datasource' => 'location',
		'latfield' => 'picture',
		'lonfield' => 'picture',
		'markers' => 'static',
		'markerfield' => 'picture',
		'markertype' => 'drupal',
	));
	$handler = $view->new_display('page', 'Chart', 'page_1');
	$handler->override_option('style_plugin', 'table');
	$handler->override_option('style_options', array(
		'grouping' => '',
		'override' => 1,
		'sticky' => 0,
		'order' => 'asc',
		'columns' => array(
			'picture' => 'picture',
			'name' => 'name',
			'contact' => 'contact',
			'field_arrival_time_value' => 'field_arrival_time_value',
			'field_departure_time_value' => 'field_departure_time_value',
		),
		'info' => array(
			'picture' => array(
				'sortable' => 0,
				'separator' => '',
			),
			'name' => array(
				'sortable' => 0,
				'separator' => '',
			),
			'contact' => array(
				'separator' => '',
			),
			'field_arrival_time_value' => array(
				'separator' => '',
			),
			'field_departure_time_value' => array(
				'separator' => '',
			),
		),
		'default' => '-1',
	));
	$handler->override_option('path', 'share/ride');
	$handler->override_option('menu', array(
		'type' => 'none',
		'title' => '',
		'description' => '',
		'weight' => 0,
		'name' => 'navigation',
	));
	$handler->override_option('tab_options', array(
		'type' => 'none',
		'title' => '',
		'description' => '',
		'weight' => 0,
	));
	$handler = $view->new_display('page', 'Map', 'page_2');
	$handler->override_option('header', '<strong>Step 1</strong>: Create a rideshare post in the left sidebar.  Those will automatically become your defaults.  <br /><strong>Step 2</strong>: Use the map to skim for a match, or the chart for marking many as "favorites" or "remove."<p><div id="rideshare_map_key" style="display: inline; "><strong>Key</strong>:&nbsp;&nbsp;&nbsp;<img src="http://greeneventsguide.org/swsea/sites/greeneventsguide.org.swsea/modules/gmap/markers/small/bred.png">Rider&nbsp;&nbsp;&nbsp;<img src="http://greeneventsguide.org/swsea/sites/greeneventsguide.org.swsea/modules/gmap/markers/small/orange.png">Either Ride or Drive&nbsp;&nbsp;&nbsp;<img src="http://greeneventsguide.org/swsea/sites/greeneventsguide.org.swsea/modules/gmap/markers/small/yellow.png">Driver&nbsp;&nbsp;&nbsp;<img src="http://greeneventsguide.org/swsea/sites/greeneventsguide.org.swsea/modules/gmap/markers/small/green.png">Bus/Bike/Walk group</div>

		<p>' . $quicklinks


	);
	$handler->override_option('header_format', '3');
	$handler->override_option('header_empty', 1);
	$handler->override_option('style_options', array(
		'macro' => '[gmap markers=drupal::37.68382032669382,-122.4382321536541 |width=98%|height=480px|control=Large |type=Map    ]    ',
		'datasource' => 'location',
		'latfield' => 'picture',
		'lonfield' => 'picture',
		'markers' => 'taxonomy',
		'markerfield' => 'picture',
		'markertype' => 'purple',    // !!! not what we really want
	));
	$handler->override_option('row_plugin', 'node');
	$handler->override_option('row_options', array(
		'relationship' => 'none',
		'build_mode' => 'teaser',
		'links' => 1,
		'comments' => 0,
	));
	$handler->override_option('path', 'share/ride/map');
	$handler->override_option('menu', array(
		'type' => 'none',
		'title' => '',
		'description' => '',
		'weight' => 0,
		'name' => 'navigation',
	));
	$handler->override_option('tab_options', array(
		'type' => 'none',
		'title' => '',
		'description' => '',
		'weight' => 0,
	));


	// Let users play with this (is that a good idea?)
	$views[$view->name] = $view;

	return $views;
}


