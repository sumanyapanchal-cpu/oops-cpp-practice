#include<iostream>
using namespace std;

class employee{

    private:
        double salary;
        
    public:
        string name;
        int employeeId;
        
        void setSalary(double s)
        {
            salary = s;
        }

        void displayDetails();
    };

    void employee::displayDetails()
    {
            cout << "Employee Name: " << name << endl;
            cout << "Employee ID: " << employeeId << endl;
            cout << "Salary: " << salary << endl;
        }

int main()
{
    employee e1, e2;
    e1.name = "John Smith";
    e1.employeeId = 101;
    e1.setSalary(50000);
    e1.displayDetails();

    e2.name = "Jane Doe";
    e2.employeeId = 102;
    e2.setSalary(60000);
    e2.displayDetails();

    return 0;
}