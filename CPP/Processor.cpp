#include <iostream>
#include <string>

using namespace std;

class Processor
{
    private:
        // variabel untuk menampung nama prosesor dan harganya
        string name;    
        int price;      
    
    public:
        // constructor
        Processor() {}

        Processor(string name, int price)
        {
            this->name = name;
            this->price = price;
        }

        // setter and getter
        void setName(string name)
        {
            this->name = name;
        }

        string getName()
        {
            return this->name;
        }

        void setPrice(int price)
        {
            this->price = price;
        }

        int getPrice()
        {
            return this->price;
        }

        void printProcessor()
        {
            cout << "Nama Processor : " << this->getName() << endl;
            cout << "Harga Processor : Rp " << this->getPrice() << endl;
        }

        // destructor
        ~Processor() {}
};