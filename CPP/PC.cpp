#include <iostream>
#include <string>

#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"

using namespace std;

class PC
{
    private:
        // untuk menampung data dari processor, disk, ram, dan total harga
        Processor processor1;  
        Disk disk1;   
        Ram ram1;     
        int totalPrice; /
    
    public:
        // constructor
        PC() {}

        PC(Processor processor1, Disk disk1, Ram ram1, int totalPrice)
        {
            this->processor1 = processor1;
            this->disk1 = disk1;
            this->ram1 = ram1;
            this->totalPrice = totalPrice;
        }

        // setter and getter
        void setProcessor(Processor processor1)
        {
            this->processor1 = processor1;
        }

        Processor getProcessor()
        {
            return this->processor1;
        }

        void setDisk(Disk disk1)
        {
            this->disk1 = disk1;
        }

        Disk getDisk()
        {
            return this->disk1;
        }

        void setRam(Ram ram1)
        {
            this->ram1 = ram1;
        }

        Ram getRam()
        {
            return this->ram1;
        }

        void setTotalPrice(int totalPrice)
        {
            this->totalPrice = totalPrice;
        }

        int getTotalPrice()
        {
            return this->totalPrice;
        }

        void printPC()
        {
            cout << "==============================" << endl;
            this->processor1.printProcessor();
            this->ram1.printRam();
            this->disk1.printDisk();
            cout << "Total Harga : Rp " << this->getTotalPrice()  << endl;
            cout << "==============================" << endl;
        }

        // destructor
        ~PC() {}
};