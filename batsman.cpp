#include <iostream>

using namespace std;

class batsman 
{
    int bcode;
    char name[20];
    int in,no,ru;
    int batavg;

    public :

    void readdata ()
    {
        cout << "Enter the bcode : ";
        cin >> bcode;
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the innings,otout,runs : ";
        cin >> in >> no >> ru ;
    }
    void average ()
    {
        cout << "The batsman average is a : ";
        cout << ru/(in-no);
    }

};

int main ()
{
    batsman  avg;
    avg.readdata ();
    avg.average ();
}