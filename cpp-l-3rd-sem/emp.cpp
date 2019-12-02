#include<iostream>
using namespace std;
class emp
{
 int empID,salary;
 string name,department;
public : void getdata()
         {
          cout<<"Enter employee details:"<<endl;
cout<<"Enter employee id"<<endl;
          cin>>empID;
cout<<"Enter name "<<endl;
          cin>>name;
cout <<"Enter salary"<<endl;     
     cin>>salary;
cout<<"Enter Department"<<endl;
          cin>>department;
         }
         void putdata()
         {
          cout<<"empID:\t"<<empID<<"\n";
          cout<<"name of employee:"<<name<<"\n";          
          cout<<"salary of employee:"<<salary<<"\n";
          cout<<"working department:"<<department<<"\n";
         }
};
int main()
{
string a;
cout << "enter department"
 emp e[5];
 for(int i=0;i<5;i++)
 {
 e[i].getdata();
 
e[i].putdata();
 } 
}

