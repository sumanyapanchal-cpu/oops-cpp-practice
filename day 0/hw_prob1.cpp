#include<iostream>
using namespace std;


class car{
    public:
        string brand;
        int speed;

    void display()
    {
        cout << "brand :" << brand << endl;
        cout << "speed:" << speed << endl;
    }    
};


int main()
{
    car c1,c2;
    c1.brand = "toyota";
    c1.speed = 120;

    c2.brand = "BMW";
    c2.speed = 180;

    c1.display();
    c2.display();
    
    return 0;
}