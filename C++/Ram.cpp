#include <iostream>
#include <string>

using namespace std;

class Ram
{
    private:
        //menampung kapasitas dan harga
        string capacity;    
        int price;          

    public:
        // constructor
        Ram() {}

        Ram(string capacity, int price)
        {
            this->capacity = capacity;
            this->price = price;
        }

        // setter and getter
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

        void printRam()
        {
            cout << "Kapasitas RAM : " << this->getCapacity() << endl;
            cout << "Harga RAM : Rp " << this->getPrice() << endl;
        }

        // destructor
        ~Ram() {}
};