#include<iostream>
using namespace std;

class Student{
    public:
        string name;
     
        void display();
};

void Student::display()
{
    cout << "name: " << name << endl;
}

int main()
{
    Student s;
    s.name = "Alice";
    s.display();
    return 0;
}