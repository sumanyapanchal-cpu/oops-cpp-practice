#include<iostream>
using namespace std;

//class declaration-
class student{ 

    //access specifier-
    public: 

    //data members-
        int age;
        int rollno;

        //member fxn-
        void display()
        {
            cout << "Age: " << age << endl;
            cout << "Roll No: " << rollno << endl;
        }
    
};



int main()
{
    student s1;
    s1.age = 19;
    s1.rollno = 62;
    s1.display();
    return 0;
}