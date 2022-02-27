public class main {
    public static void main(String[] args) {
        Processor cpu = new Processor("Core i7 8th Gen", 120000);
        Ram memory = new Ram("64GB", 300000);
        Disk storage = new Disk("SSHD", "1TB", 500000);
        int totalHarga;
    
        //menghitung total harga
        totalHarga = cpu.getPrice() + memory.getPrice() + storage.getPrice();

        PC laptop = new PC(cpu, memory, storage, totalHarga);

       //menampilkan keluaran
        laptop.printPC();
    }
}
