public class Disk {
    //varibel untuk menampung tipe, kapasitas, dan harga
    private String type;       
    private String capacity;    
    private int price;          

    // constructor
    public Disk() {
    }

    public Disk(String type, String capacity, int price) {
        this.type = type;
        this.capacity = capacity;
        this.price = price;
    }

    // setter and getter
    public void setType(String type) {
        this.type = type;
    }

    public String getType() {
        return this.type;
    }

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
    public void printDisk() {
        System.out.println("Tipe Disk : " + this.getType());
        System.out.println("Kapasitas Disk : " + this.getCapacity());
        System.out.println("Harga Disk : Rp " + this.getPrice());
    }
}