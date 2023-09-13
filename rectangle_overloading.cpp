#include <iostream>

using namespace std;

class rectangle
{
    int len,wid;

    public:

    void setdata (int a,int d)
    {
        len=a;
        wid=d;
    }
    rectangle operator+(rectangle &h)
    {
        rectangle rac;
        rac.len=len+h.len;
        rac.wid=wid+h.wid;

        return rac;
    }
    int getdata()
    {
        return len*wid;
    }
};
int main()
{
    rectangle rac1,rac2,rac3;

    rac1.setdata(1,4);
    cout << "Rectangle 1 = " << rac1.getdata() << endl;

    rac2.setdata(2,3);
    cout << "Rectangle 2 = " << rac2.getdata() << endl;

    rac3=rac1+rac2;
    cout << "Rectangle 3 = " << rac3.getdata() << endl;
}