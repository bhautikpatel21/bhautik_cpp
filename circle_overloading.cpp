#include <iostream>

using namespace std;

class circle
{
    int radius;

    public :

    void setdata (int m)
    {
        radius=m;
    }
    circle operator+(circle &b)
    {
        circle cir;
        cir.radius=radius+b.radius;

        return cir;
    }
    int getdata ()
    {
        return 3.14*radius*radius;
    }
};
int main ()
{
    circle cir1,cir2,cir3;

    cir1.setdata(2);
    cout << "Circle 1 = "<< cir1.getdata() << endl;

    cir2.setdata(5);
    cout << "Circle 2 = "<< cir2.getdata() << endl;

    cir3=cir1+cir2;
    cout << "Circle 3 = "<< cir3.getdata() << endl;
}