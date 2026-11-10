#include<iostream>
using namespace std;

class Mobile{
    public:
        string brand;
        double price;

        Mobile() //default constructor
        {
            brand = "unknown";
            price = 0.0;
        }

        Mobile(string b , double p) //parameterized constructor
        {
            brand = b;
            price = p;
        }

        void display()
        {
            cout << "brand: " << brand << endl;
            cout <<"price: " << price << endl;
        }
};

int main()
{
    Mobile m1;
    m1.display();

    cout << endl;

    Mobile m2("oneplus" , 34000);
    m2.display();
    return 0;
}