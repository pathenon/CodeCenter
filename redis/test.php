<?php 
	$client = new Redis();
	$client->connect("127.0.0.1", 6379);
	$client->set('name', 'Felix');
	echo $client->get('name')."======";
?>
