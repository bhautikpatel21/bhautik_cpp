#include <iostream>

using namespace std;

struct person
{
    int age;
    int salary;
    int no;

};
int main()
{
    struct person person1;
    person1.age=20;
    person1.salary=20000;
    person1.no=5;

    cout << person1.age <<person1.salary <<person1.no;
    
}