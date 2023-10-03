#include <iostream>
using namespace std;

template <class T>
void display (T t1)
{
    cout << "Display template : " << t1 << endl;
}

template <class x,class y>
void Display (x a, y b)
{
    cout << "Display Template : "<< a << "\t" << b << endl;
}
int main ()
{
    display(200);
    display(12.56);
    display('G');
    Display('G',1.25);
    Display('X',25);
    Display(25,1.25);

    return 0 ;
}