#include <iostream>
using namespace std;

int reverse ();
int reverse ()
{
    int rev=0,rem,num;
    cin >> num;

    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    cout << rev;
    return 0;
}
int main ()
{
    reverse();
    return 0;
}