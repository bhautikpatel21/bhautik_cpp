#include <iostream>


using namespace std;

class report 
{
    int adno;
    char name[20];
    float marks[5];
    float average;

    public:

    void readinfo()
    {
        cout << "Enter the admission number in 4 digits : ";
        cin >> adno;
        cout << "Enter the student name : ";
        cin >> name;
        cout << "Enter the 5 floating value : ";
        cin >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4];
    }
    void getavg()
    {
        cout << " Marks average is a : ";
        cout << (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
    }
};

int main ()

{
    report report;
    
    report.readinfo();
    report.getavg ();

    return 0;
}