#include<iostream>
using namespace std;

class student{
public:
    string name;
    int rollno;

    student()
    {
        name = "sumanya";
        rollno = 25;
    }

    void display()
    {
        cout << "name: " << name << endl;
        cout << "rollno: " << rollno << endl;
    }

};

int main()
{
    student s;
    s.display();
    return 0;
}