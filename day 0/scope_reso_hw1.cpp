#include<iostream>
using namespace std;

class Rectangle{
    public:
        float length;
        float breadth;

        void calculateArea();
};

void Rectangle::calculateArea()
{
    cout << "Area of rectangle: " << length * breadth << endl;
}



int main()
{
    Rectangle r;
    r.length = 10;
    r.breadth = 5;    
    r.calculateArea();
    return 0;
}