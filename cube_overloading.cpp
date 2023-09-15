#include <iostream>
using namespace std;

class cube 
{
    int a;

    public :

    void setdata(int g)
    {
        a=g;
    }

    cube operator+(cube &k)
    {
        cube cu;
        cu.a=a+k.a;

        return cu;
    }
    int getdata()
    {
        return 6*(a*a);
    }
};

int main()
{
    cube cu1,cu2,cu3;

    cu1.setdata(5);
    cout << "Cube  1 = " <<cu1.getdata() << endl;

    cu2.setdata(4);
    cout << "Cube 2 = " <<cu2.getdata() << endl;

    cu3=cu1+cu2;
    cout << "Cube 3 = " <<cu3.getdata() << endl;
}