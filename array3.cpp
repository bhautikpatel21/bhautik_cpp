#include <iostream>
using namespace std;

int main ()
{
    int a[10],i;

    cout << "Enter the 10 elements : ";

    for (i=0; i<=9; i++)
    {
        cin >> a[i];
    }
    cout << "\n";
    cout << "The revers elemets is a :";
    for (i=9; i>=0; i--)
    {
    
        cout <<" "<< a[i];
    }
}