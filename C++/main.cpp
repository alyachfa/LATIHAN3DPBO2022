#include <iostream>
#include <string>

#include "PC.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Processor cpu("Core i7 8th Gen", 120000);
    Ram memory("64GB", 300000);
    Disk storage("SSHD", "1TB", 500000);
    int totalHarga;

    //menghitung total harga
    totalHarga = cpu.getPrice() + memory.getPrice() + storage.getPrice();

    PC Pc(cpu, storage, memory, totalHarga);

    Pc.printPC(); // menampilkan hasil
    return 0;
}