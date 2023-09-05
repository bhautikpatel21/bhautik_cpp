#include <iostream>

using namespace std;

class STUDENT
{
    int admno=125;
    char sname[20]="bhautik";
    float eng=85,math=75,sci=84;


   float total=eng+math+sci;
    
   public :

   STUDENT(int admno,string sname,float eng,float math,float sci)
    {
      cout << "\nEnter student no. :"<< admno;
      cout << "\nEnter student name :"<< sname;
      cout << "\nEnter eng marks : "<< eng;
      cout << "\nEnter math marks : "<< math;
      cout << "\nEnter sci marks :"<< sci;
      cout << "\n|| Total ||"<< total;
   }

};

int main ()
{
    STUDENT Stu(125,"bhautik",85,75,84);

}
