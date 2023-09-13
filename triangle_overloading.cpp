#include <iostream>

using namespace std;

class triangle
{
    int hieght;
    int base;

    public :

    void setdata (int a,int b)
    {
        hieght =a;
        base=b;
    }
    triangle operator+(triangle &g)
    {
        triangle tri;
        tri.hieght=hieght+g.hieght;
        tri.base=base+g.base;

        return tri;
    }
    int getdata ()
    {
        return (hieght*base)/2;
    }
};
int main ()
{
    triangle tri1,tri2,tri3;

    tri1.setdata(2,4);
    cout << "Triangle 1 = "<< tri1.getdata() <<endl;

    tri2.setdata(1,3);
    cout << "Tringle 2 = "<< tri2.getdata() <<endl;

    tri3=tri1+tri2;
    cout << "Triangle 3 = "<< tri3.getdata() <<endl;
}