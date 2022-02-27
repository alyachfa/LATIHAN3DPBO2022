<?php

class Disk {
    //varibel untuk menampung tipe, kapasitas, dan harga
    private $type;      
    private $capacity; 
    private $price;     

    // constructor
    function __construct($type, $capacity, $price) {
        $this->type = $type;
        $this->capacity = $capacity;
        $this->price = $price;
    }

    // setter and getter
    function setType($type) {
        $this->type = $type;
    }

    function getType() {
        return $this->type;
    }

    function setCapacity($capacity) {
        $this->capacity = $capacity;
    }

    function getCapacity() {
        return $this->capacity;
    }

    function setPrice($price) {
        $this->price = $price;
    }

    function getPrice() {
        return $this->price;
    }

    // method
    function printDisk() {
        echo "Tipe Disk : ". $this->getType(). "<br/>";
        echo "Kapasitas Disk : ". $this->getCapacity(). "<br/>";
        echo "Harga Disk : Rp ". $this->getPrice(). "<br/>";
    }
}

?>