#include <iostream>
#include <string.h>

using namespace std;

class test
{
    int testcode;
    string description;
    int nocondidate;
    int centerreqd;

    public:
    int calcntr ()
    {
        return (nocondidate/100+1);
    }

    void schedule()
    {
        cout << "Enter the test code : ";
        cin >> testcode;
        cout << "Enter the description : ";
        cin >> description;
        cout << "Enter number of candidates : ";
        cin >> nocondidate;
        centerreqd =calcntr ();

    }
    void disptest ()
    {
        cout << "\ntestcode : "<< testcode ;
        cout << "\ndescription : "<< description;
        cout << "\nnumber of candidates : "<< nocondidate;
        cout << "\nnumber of centers required : "<< centerreqd;
    }
};
int main ()
{
    test stu;
    stu.calcntr();
    stu.schedule();
    stu.disptest();

    return 0;
}






