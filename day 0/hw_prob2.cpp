#include<iostream>
using namespace std;

class BankAccount{
    private:
        float balance;

    public:
        string accountHolderName;

        void setBalance(double a)
        {
            balance = a;
        }

        void display()
        {
            cout << "Acoount holder name: " << accountHolderName << endl;
            cout << "Balance: " << balance << endl;
        }
};

int main()
{
    BankAccount a;
    
    a.accountHolderName = "John Doe";
    a.setBalance(2000.02);
    a.display();

    return 0;
}