#include <iostream>
#include <cmath>
using namespace std;

class number 
{
    protected :

    double n ;

    public :

    void getnumber ()
    {
        cout << "Enter the number : ";
        cin >> n;
    }
};

class squareroot : public number 
{
    public :

    void get()
    {
        double ans=sqrt(n);
        cout << "Square root of " << n << " is = " << ans << endl;
    }
};

int main ()
{
    squareroot sqr;
    sqr.getnumber();
    sqr.get();
}