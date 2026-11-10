#include<iostream>
using namespace std;

class employee{
    public:
        string name;
        int employeeId;

    employee() //constructor
    {
        //default data that is ab agar object main fxn me create krke direct e1.display() kra to default data aayga
        name = "sumanya";
        employeeId = 123;
    }  
    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
    }  
};

int main()
{
    employee e1;
    e1.display();

    //if values are changed to wo panchal and 456 dikhayga but by default if nothing then sumanya and 123
    //here same object me update hua hai
    e1.name = "panchal";
    e1.employeeId = 456; 
    e1.display();
    return 0;
}