#include <iostream>
using namespace std;

class english
{
    int eng;

    public :

    void emarks()
    {
        cout << "\nEnter the english marks = " ;
        cin >> eng;
    }
};

class maths
{
    int math;

    public : 

    void mmarks()
    {
        cout << "\nEnter the maths marks = " ;
        cin >> math;
    }
};

class scince
{
    int sci;

    public :

    void smarks()
    {
        cout << "\nEnter the scince marks = ";
        cin >> sci;
    }
};

class total : protected english ,protected maths,protected scince
{
   
    public :

    void ttotal()
    {
        
        emarks();
        mmarks();
        smarks();

    }
};

int main ()
{
    total to;
    to.ttotal();
}