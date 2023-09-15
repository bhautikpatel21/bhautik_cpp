#include <iostream>
using namespace std;

class markshit
{
    string name;
    int eng,math,guj,sci,total;
    double per;

    public :

    markshit ()
    {
        cout<<endl;
        cout << "Enter the student name = ";
        cin >> name;
        cout << "Enter the english marks = ";
        cin >> eng;
        cout << "Enter the math marks = ";
        cin >> math;
        cout << "Enter the scince marks = ";
        cin >> sci;
        cout << "Enter the gujarati marks = ";
        cin >> guj;

        total=eng+math+sci+guj;
        per=total/4;
    }

    void getdata()
    {
        cout << name <<"\t"<<eng<<"\t"<<math<<"\t"<<sci<<"\t"<<guj<<"\t"<<total<<"\t"<<per<<"\t"<<endl;
    }
};

int main ()
{
    markshit Markshit[2];

    cout << "name\t"<<"eng\t"<<"math\t"<<"sci\t"<<"guj\t"<<"total\t"<<"per\t"<<endl;

    for (int i=0; i<=1; i++)
    
    Markshit[i].getdata();

}