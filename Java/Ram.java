public class Ram {
    private String capacity;    //menampung kapasitas dan harga
    private int price;          

    // constructor
    public Ram() {
    }

    public Ram(String capacity, int price) {
        this.capacity = capacity;
        this.price = price;
    }

    // setter and getter
    public void setCapacity(String capacity) {
        this.capacity = capacity;
    }

    public String getCapacity() {
        return this.capacity;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public int getPrice() {
        return this.price;
    }

    // method
    public void printRam() {
        System.out.println("Kapasitas RAM: " + this.getCapacity());
        System.out.println("Harga RAM : Rp " + this.getPrice());
    }
} 