#include<iostream>
using namespace std;

class student{
    public:
        string name;
        int rollno;

        //default constructor
        student()
        {
            name = "unknown";
            rollno = 0;
        }

        //parametrised constructor
        student(string n , int r)
        {
            name = n;
            rollno = r;
        }

        void display()
        {
            cout << "name: " << name << endl;
            cout << "rollno: " << rollno << endl;
        }
};

int main()
{
    student s1;
    s1.display(); //this makes the call to defualt constructor since kuch bh likha nahi h any parameter
    //output - unknown, 0

    cout << endl;

    student s2("sumanya" , 19);
    s2.display(); //this makes the call to parametrised constructor since kuch likha h parameter passed
    //output - sumanya, 19
    return 0;
}