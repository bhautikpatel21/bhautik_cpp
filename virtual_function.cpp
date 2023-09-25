#include <iostream>
using namespace std;

class Base
{
    public :

    virtual void showprint()
    {
        cout << "Base class output print ---> " << endl;
    }
};

class Derived : public Base
{
    public :

    void showprint ()
    {
        cout << "Derived class output print ---> " <<endl;
    }
};

int main()
{
    Base a,*b;
    Derived d;

    b=&a;
    b->showprint();

    b=&d;
    b->showprint();
}