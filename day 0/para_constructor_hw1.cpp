#include<iostream>

using namespace std;

class Book{
    public:
        string title;
        double price;
        int pages;
    
    Book(string t , double p , int pg)
    {
        title = t;
        price = p;
        pages = pg;
    }    

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Pages: " << pages << endl;
    }
};

int main()
{
    Book b1 ( "C++ Programming" , 450 , 350);
    Book b2 ("Data Structures" , 550 , 500);

    b1.display();
    cout << endl;
    b2.display();

    return 0;
}