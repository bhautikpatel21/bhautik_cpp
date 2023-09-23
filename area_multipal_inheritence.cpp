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

class rectangle 
{
    public :

    void rearea()
    {
        cout << "\n ---> Rectangle area is a lengh * width " ;
    }
};

class circle 
{
    public :

    void ciarea()
    {
        cout << "\n ---> Circle area is a 3.14*radius*radius ";
    }
};

class triangle
{
    public :

    void trarea()
    {
        cout << "\n ---> Triangle area is a (heigth*width)/2 ";
    }
};

class all : protected square ,protected rectangle,protected circle,protected triangle
{
    public :

    void alll()
    {
        area();
        rearea();
        ciarea();
        trarea();
    }
};

int main ()
{
    all a;
    a.alll();
}