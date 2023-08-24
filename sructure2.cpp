#include <iostream>
using namespace std;

struct book
{
    int idno;
    int writedate;
    int price;
};
int main ()
{
    struct book book1;
    book1.idno=2;
    book1.writedate=31;
    book1.price=100;

    cout << book1.idno << book1.writedate << book1.price;

}