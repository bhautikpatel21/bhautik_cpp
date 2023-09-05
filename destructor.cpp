#include <iostream>

using namespace std;

class Area
{
    int a=5;

    public :

    Area()
    {
        cout << "|| Area default contructor is call___||";
    }
    Area(int a)
    {
        cout <<"Area of circle : = "<< 3.14*a*a << "\n";
    }
    Area(int a,double b)
    {
        cout << "Area of triangle : = " << (a*b)/2 <<"\n";
    }
    Area(double a)
    {
        cout << "Area of square : = " << a*a << "\n";
    }
    Area(int a,int b)
    {
        cout << "Area of rectangle : = "<< a*b << "\n";
    }
    ~ Area ()
    {
        cout << "Destructor class is call ___\n";
    }

};


int main ()
{
   Area ar(5),ar1(5,1.5),ar2(5.5),ar3(4,6);
}