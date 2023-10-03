#include <iostream>
using namespace std;

class restrorent
{
    string name,menu;
    int number,contity,gst,bill,totalbill ;

    public :

    void userdetail()
    {
        cout << "Enter the costmer name : ";
        cin >> name;
        cout << "Enter the bill  number : ";
        cin >> number;
    }
    void showmanu()
    {   
        cout << " \n          ||-----: MENU :-----|| \n"<< endl;
        cout << " pizza  \t burger   \t pakoda   \n manchuriyam  \t kanda bhaji  \t puri bhaji \n pavbhaji \t cheese pakoda  \t spring roll " << endl ;
        cout << "\nSelect your menu = ";
        cin >> menu;
        cout << "\n|| --  Enter your contity  --  || = ";
        cin >> contity;
    }
    void showbill()
    {
        cout << "\n      ||----: BILL :----||    \n";

        bill=99*contity;
        cout << "\nNETBILL = " << bill;
        gst=bill/13;
        cout <<"\nGST = "<< gst;
        totalbill=bill+gst;
        cout << "\nTotal bill = " << totalbill;
    }

};

int main()
{
    restrorent res;
    res.userdetail();
    res.showmanu();
    res.showbill();
}