<?php 
$client = new Mongo();
$db = $client->selectDB("test")->selectCollection("users");
$data = $db->findOne();
var_dump($data);



?>
