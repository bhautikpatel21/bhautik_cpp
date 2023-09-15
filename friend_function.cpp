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
    
    int getdata()
    {
        return len*wid;
    }
    friend rectangle operator+(rectangle &a,rectangle &b);
};

   rectangle operator+(rectangle &m,rectangle &n)
    {
        rectangle rec;
        rec.len=m.len+n.len;
        rec.wid=m.wid+n.wid;

        return rec;
    }
    int main()
   {
    rectangle rec1,rec2,rec3;

    rec1.setdata(1,4);
    cout << "Rectangle 1 = " << rec1.getdata() << endl;

    rec2.setdata(2,3);
    cout << "Rectangle 2 = " << rec2.getdata() << endl;

    rec3=rec1+rec2;
    cout << "Rectangle 3 = " << rec3.getdata() << endl;
 }