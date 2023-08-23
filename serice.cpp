#include <iostream>
using namespace std;

int main ()
{
    int i=11;

    while (i<=55)
    {
        cout <<" "<< i;
        i++;

        if (i%5==1)
        {
            i=i+5;
            cout << "\n";
            
        }
    }
}