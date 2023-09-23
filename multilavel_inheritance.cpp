#include <iostream>
using namespace std;

class square
{
    public :

    void area()
    {
        cout << "\n ---> Square area is a side * side " ;
    }
};

class rectangle : protected square
{
    public :

    void rearea()
    {
        area();
        cout << "\n ---> Rectangle area is a lengh * width " ;
    }
};

class circle : protected rectangle
{
    public :

    void ciarea()
    {
        rearea();
        cout << "\n ---> Circle area is a 3.14*radius*radius ";
    }
};

class triangle : protected circle 
{
    public :

    void trarea()
    {
        ciarea();
        cout << "\n ---> Triangle area is a (heigth*width)/2 ";
    }
};

class all : protected triangle
{
    public :

    void alll()
    {
        trarea();
    }
};

int main ()
{
    all a;
    a.alll();
}