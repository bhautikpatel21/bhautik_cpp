#include <iostream>

using namespace std;

class student
{
    int admno;
    char sname [20];
    float eng,math,sci,total;

    float ctotal ()
    {
        return eng+math+sci;
    }

    public:
    void takedata ()
    {
    
        cout << "Enter student no. :";
        cin >> admno;
        cout << "Enter student name :";
        cin >> sname ;
        cout << "Enter eng marks : ";
        cin >> eng;
        cout << "Enter math marks : ";
        cin >> math;
        cout << "Enter sci marks :";
        cin >> sci;
    
        total = ctotal();
    }

void showdata()
{
    cout << "\nstudent no. is :" << admno;
    cout << "\nstudent name is :"<< sname;
    cout << "\nEng\tmaht\tsci\ttotal";
    cout << "\n"<<eng<<"\t"<<math<<"\t"<<sci<<"\t"<<total;
}

};

int main ()
{
    student stu;

    stu.takedata();
    stu.showdata();

    return 0;
}












