#include <iostream>

using namespace std;

int greet ();
int greet ()
{
    cout << "Hello world";
}
int main ()
{
    int a=5,b;
    b=a+5;

    cout << a<<" "<<b<<" ";
    greet ();
    return 0;
}