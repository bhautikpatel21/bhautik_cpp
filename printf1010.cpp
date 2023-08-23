#include <iostream>

using namespace std ;

int main ()
{
    int i=1,j,n=1;
    do
    {
        j=1;
    do
    {
        cout <<n;
        if (n==0)
        {
            n=1;
        }
        else
        {
            n=0;
        }
        j++;
    } while (j<=i);
    
        cout <<"\n";
        i++;
    
    
    }while (i<=5);
    
}
