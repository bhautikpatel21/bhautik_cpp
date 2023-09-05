#include <iostream>

using namespace std;

class flight
{
    int flightnu;
    char destination;
    float distance,fuel;

    void calfuel ()
    {
        if (distance<=1000)
        {
            fuel=500;
        }
        else
        if (distance >1000 && distance <=2000)
        {
            fuel=220;
        }
    }
    public:

    void feedinfo()
    {
        cout <<"Enter the flight number : ";
        cin >> flightnu ;
        cout << "Enter the distination : ";
        cin >> destination;
        cout << "Enter distance : ";
        cin >> distance ;
        
        calfuel ();
    }

};

int main ()
{
    flight f;
    f.feedinfo();
}