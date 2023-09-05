#include <iostream>

using namespace std;

class book
{
    int bookno;
    char title[20];
    float price ;

    public:

    float taotalcost()
    {
        return price;
    }

    void input ()
    {
        cout << "Enter book number : ";
        cin >> bookno;
        cout << "Emter the book title : ";
        cin >> title;
        cout << "Enter the price : ";
        cin >> price;
    }

    void purchase ()
    {
       int numcopies;
       cout << "Enter the number of copies to be purcheased : ";
       cin >> numcopies;
       
    }
}