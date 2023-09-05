#include <iostream>

using namespace std;

class Area
{
    int a=10,b=5;

    public :

    Area()
    {
        cout << "|| The constuctor is default ||";
    }
    Area(int a)
    {
        cout <<"Area of circle : = "<< 3.14*a*a;
    }
    Area(int a,double b)
    {
        cout << "Area of triangle : = " << (a*b)/2;
    }
    Area(double a)
    {
        cout << "Area of square : = " << a*a;
    }
    Area(int a,int b)
    {
        cout << "Area of rectangle : = "<< a*b;
    }

};
int main()
{
    Area area(20.5);
}