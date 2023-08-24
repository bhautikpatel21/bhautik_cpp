#include <iostream>
using namespace std;

struct point 
{
    int x;
    int y;
};
int main ()
{
    struct point point1;
    point1. x=5;
    point1. y=6;

    cout << point1.x << " " << point1.y;
}