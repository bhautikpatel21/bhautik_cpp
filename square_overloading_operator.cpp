#include <iostream>

using namespace std;

class square
{
    int len;

    public :

    void setdata (int a)
    {
        len=a;
    }
    square operator+(square  &b)
    {
        square squ;
        squ.len=len+b.len;
        return squ;
    }
    int getdata ()
    {
        return len*len;
    }
};
int main ()
{
    square squ1,squ2,squ3;
    squ1.setdata(5);
    cout << "First square is a = " << squ1.getdata() <<endl;

    squ2.setdata(4);
    cout << "Second square is a = "<< squ2.getdata() << endl;

    squ3=squ1+squ2;
    cout << "Third squre is a = "<< squ3.getdata() << endl;
}