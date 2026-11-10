#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;

    student(string a, int b)
    {
        name = a;
        age = b;
    }

    void display()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
    }
};


int main()
{
    student s1 ( "sumanya" , 19);
    student s2 ("aakash " , 20);

    s1.display();
    s2.display();

    
    return 0;
}