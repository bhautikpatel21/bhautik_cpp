#include <iostream>

using namespace std;

int main ()
{
    int a[10],i,sum=0;

    for (i=0; i<=9; i++)
    {
    cin >> a[i];
    }
    for (i=0; i<=9; i++)
    {
    sum=sum+a[i];
    }
    cout << sum;
}