#include <iostream>
using namespace std;

class program
{
    int rate,qty,amt,dis,gst,billamt;
    string name;
    double netbill;
    
    public :

    program ()
    {
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the rate : ";
        cin >> rate;
        cout << "Enter the gtp : ";
        cin >> qty;
        amt=rate*qty;
        dis=(amt*5/100);
        billamt=amt-dis;
        gst=billamt*18/100;
        netbill=billamt+gst;
    }

    void getdata()
    {
        cout <<name <<"\t" <<rate<<"\t"<<qty<<"\t"<<amt<<"\t"<<dis<<"\t"<<billamt<<"\t"<<gst<<"\t"<<netbill<<"\t"<<endl;
    }
};

int main ()
{
    program Program[3];
    {
       cout << "name\t" << "rate\t" << "gtp\t" << "amt\t" << "dis\t" <<"billamt\t" << "gst\t" << "netbill\t"<<endl;

       for (int i=0;  i<3; i++)
       
       Program[i].getdata();
    }
    
}