<?php

include "Processor.php";
include "Ram.php";
include "Disk.php";

class PC {
    // untuk menampung data dari processor, disk, ram, dan total harga
    private $processor1;  
    private $ram1;       
    private $disk1;       
    private $totalPrice;    

    // constructor
    function __construct($processor1, $ram1, $disk1, $totalPrice) {
        $this->processor1 = $processor1;
        $this->ram1 = $ram1;
        $this->disk1 = $disk1;
        $this->totalPrice = $totalPrice;
    }

    // setter and getter
    function setProcessor($processor1) {
        $this->processor1 = $processor1;
    }

    function getProcessor() {
        return $this->processor1;
    }

    function setRAM($ram1) {
        $this->ram1 = $ram1;
    }

    function getRAM() {
        return $this->ram1;
    }

    function setDisk($disk1) {
        $this->disk1 = $disk1;
    }

    function getDisk() {
        return $this->disk1;
    }

    function setTotalPrice($totalPrice) {
        $this->totalPrice = $totalPrice;
    }

    function getTotalPrice() {
        return $this->totalPrice;
    }

    // method
    function printPC() {
        echo "==============================<br/>";
        $this->processor1->printProcessor();
        $this->ram1->printRAM();
        $this->disk1->printDisk();
        echo "Total Harga : Rp ". $this->getTotalPrice(). "<br/>";
        echo "==============================<br/>";
    }
}

?>