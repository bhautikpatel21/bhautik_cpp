#include <iostream>

using namespace std;

int main ()
{
    int m,e,g,t,p;

    cout<<"Enter the math marks : ";
    cin>> m;
    cout <<"Enter the english marks :";
    cin >> e;
    cout <<"Enter the gujarati marks :";
    cin>> g;

    t=m+e+g;
    cout <<t;
    cout <<"\n";
    p=(t*100)/300;

    cout << p;
}

