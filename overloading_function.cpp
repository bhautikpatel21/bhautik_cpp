#include <iostream>

using namespace std;

class Area
{
    int a,b;

    public :

    void area(int a)
    {
        cout <<"Area of circle : = "<< 3.14*a*a << "\n";
    }
    void area(int a,double b)
    {
        cout << "Area of triangle : = " << (a*b)/2 <<"\n";
    }
    void area(double a)
    {
        cout << "Area of square : = " << a*a << "\n";
    }
    void area(int a,int b)
    {
        cout << "Area of rectangle : = "<< a*b << "\n";
    }
    
};
int main()
{
    Area ar;
    ar.area(10);
    ar.area(5,2.5);
    ar.area(6.2);
    ar.area(7,9);

}