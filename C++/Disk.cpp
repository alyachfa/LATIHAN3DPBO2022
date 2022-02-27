#include <iostream>
#include <string>

using namespace std;

class Disk
{
    private:
        //varibel untuk menampung tipe, kapasitas, dan harga
        string type;        
        string capacity;    
        int price;          
    
    public:
        // constructor
        Disk() {}

        Disk(string type, string capacity, int price)
        {
            this->type = type;
            this->capacity = capacity;
            this->price = price;
        }

        // setter and getter
        void setType(string type)
        {
            this->type = type;
        }

        string getType()
        {
            return this->type;
        }

        void setCapacity(string capacity)
        {
            this->capacity = capacity;
        }

        string getCapacity()
        {
            return this->capacity;
        }

        void setPrice(int price)
        {
            this->price = price;
        }

        int getPrice()
        {
            return this->price;
        }

        void printDisk()
        {
            cout << "Tipe Disk : " << this->getType() << endl;
            cout << "Kapasitas Disk : " << this->getCapacity() << endl;
            cout << "Harga Disk : Rp " << this->getPrice() << endl;
        }

        // destructor
        ~Disk() {}
};