<?php

$fruits = array("ALİ", "veli", "özkan", "İsmet", "ÖZTÜRK", "ümit", "ilteriş", "Mahmut", "Dağcan", "şevket", "Şevket");
sort($fruits);
foreach ($fruits as $key => $val) {
    echo "fruits[" . $key . "] = " . $val . "\n";
}

?>



