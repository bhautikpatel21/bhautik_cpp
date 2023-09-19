#include <iostream>
using namespace std;

class bank
{
    int bankbalance ,wibankbalance;
    int deposite,withdrow;
    int total,witotal;

    public :

    void depbalance ()
    {
        cout << "Enter your bankbalance : ";
        cin >> bankbalance;
        cout << "Enter the deposite : ";
        cin >> deposite;
        total=bankbalance+deposite;
        cout << "Total balance : ";
        cout << total << endl;
    }

    void wibalance ()
    {
        cout << "Enter the bankbalance : ";
        cin >> wibankbalance;
        cout<< "Enter the withdrow : ";
        cin >> withdrow;
        witotal=wibankbalance-withdrow;
        cout << "total bankbalance : " ;
        cout << witotal << endl;
    }

    void showall ()
    {
        cout << "Bank balance : " << bankbalance << endl;
    }
};

int main()
{    
     bank ba;

    int num; 

     

    cout << "Enter the number : ";
    cin >> num;

    if (num==1)
    {
        cout << "deposite\n";
        ba.depbalance ();
    }
    else if (num==2)
    {
        cout << "wibalance\n";
        ba.wibalance ();
    }
    else if (num==3)
    {
        cout << "show datail\n";
        ba.showall();
    }
}