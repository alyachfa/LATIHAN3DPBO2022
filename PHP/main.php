<?php

include "PC.php";

$cpu = new Processor("Core i7 8th Gen", 120000);
$memory = new RAM("64GB", 300000);
$storage = new Disk("SSHD", "1TB", 500000);
$totalHarga = $cpu->getPrice() + $memory->getPrice() + $storage->getPrice();

$laptop = new PC($cpu, $memory, $storage, $totalHarga);

// menampilkan keluaran
$laptop->printPC();

?>