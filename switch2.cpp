#include <iostream>
using namespace std;

int main ()
{
    int i;

    cout << "Enter the number : ";
    cin >> i;

    switch (i)
    {
        case 1:
        cout << "case 1 ";
        break;

        case 2:
        cout << "case 2 ";
        break;

        case 3:
        cout << "case 3 ";
        break;

        case 4:
        cout << "case 4 ";
        break;

        default :
        cout << "Default ";
        break;
    }
}