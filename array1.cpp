#include <iostream>

using namespace std;

int main ()
{
    int a[10]={1,5,7,8,9,7,6,3,0,5},i,sum=0;

    for (i=0; i<=9; i++)

    if (i%2==0)
    {
        sum=sum+a[i];
    }
    {
            cout<< sum;
        }
    
}