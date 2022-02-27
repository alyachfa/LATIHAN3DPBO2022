public class PC {
    // untuk menampung data dari processor, disk, ram, dan total harga
    private Processor processor1;  
    private Ram ram1;     
    private Disk disk1;   
    private int totalPrice; 

    // constructor
    public PC() {
    }

    public PC(Processor processor1, Ram ram1, Disk disk1, int totalPrice) {
        this.processor1 = processor1;
        this.ram1 = ram1;
        this.disk1 = disk1;
        this.totalPrice = totalPrice;
    }

    // setter and getter
    public void setProcessor(Processor processor1)
    {
        this.processor1 = processor1;
    }

    public Processor getProcessor()
    {
        return this.processor1;
    }

    public void setDisk(Disk disk1)
    {
        this.disk1 = disk1;
    }

    public Disk getDisk()
    {
        return this.disk1;
    }

    public void setRAM(Ram ram1)
    {
        this.ram1 = ram1;
    }

    public Ram getRAM()
    {
        return this.ram1;
    }

    public void setTotalPrice(int totalPrice)
    {
        this.totalPrice = totalPrice;
    }

    public int getTotalPrice()
    {
        return this.totalPrice;
    }

    // method
    public void printPC() {
        System.out.println("==============================");
        this.processor1.printProcessor();
        this.ram1.printRam();
        this.disk1.printDisk();
        System.out.println("Total Harga : Rp " + this.getTotalPrice());
        System.out.println("==============================");
    }
}