<?php

class Processor {
    // variabel untuk menampung nama prosesor dan harganya
    private $name; 
    private $price; 

    // constructor
    function __construct($name, $price) {
        $this->name = $name;
        $this->price = $price;
    }

    // setter and getter
    function setName($name) {
        $this->name = $name;
    }

    function getName() {
        return $this->name;
    }

    function setPrice($price) {
        $this->price = $price;
    }

    function getPrice() {
        return $this->price;
    }

    // method
    function printProcessor() {
        echo "Nama Processor : ". $this->getName(). "<br/>";
        echo "Harga Processor : Rp ". $this->getPrice(). "<br/>";
    }
}

?>
