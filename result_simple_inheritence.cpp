#include <iostream>
using namespace std;

class result
{
    int admno;
    string name;

    public :

    void setdata()
    {
        cout << "Enter the admtion number : " ;
        cin >> admno;
        cout << "Enter the student name : ";
        cin >> name;
    }

};

class get : protected result

{
        int eng,math,sci,total;

        public :

        void getdata()
        {
        setdata();
        cout << " Enter the english marks : ";
        cin >> eng;
        cout << " Enter the maths marks : ";
        cin >> math;
        cout << "Enter the scince marks : ";
        cin >> sci;
        total=eng+math+sci;
        cout << "Total = " << total;

        } 
};

int main ()
{
    get g;
   g.getdata();
}