#include <iostream>

using namespace std;

class BATSMAN
{
    int bcode=5;
    char name[20]="virat";
    int in=21,no=15,run=99;

    float batavg=run/(in-no);
    
    public :
    BATSMAN (int bcode,string name, int in,int no,int run)
    {
        cout << "\nEnter the bcode number : "<< bcode ;
        cout << "\nEnter the batsman name : "<< name ;
        cout << "\nEnter the inning : "<< in ;
        cout << "\nEnter the notout inning : "<< no ;
        cout << "\nEnter the total runs : "<< run ;
    }

};
int main()
{
    BATSMAN bat(5,"virat",21,15,99);
}