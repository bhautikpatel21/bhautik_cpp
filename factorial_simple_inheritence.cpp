#include <iostream>
using namespace std;

class factorial
{
    int num ;

    public :

    void setdata()
    {
        cout << "Enter the the last number : ";
        cin >> num;
    }
};

class get : protected factorial
{
    int i,fact=2,num;

    public :

    void getdata()
    {
    setdata();
    for (i=1; i<=num; i++)
    {
    fact=fact*i;
    }

    cout << "Factorial number is a = " << fact;
    }
};

int main ()
{
    get g;
    g.getdata();
}
