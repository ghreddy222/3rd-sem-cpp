#include<iostream>
using namespace std;

class students
{
int rollno,marks;
string name;
public:

void getdata()
{
cout<<"Enter Rollno,Name,Marks\n";
cin>>rollno>>name>>marks;
}




void putdata()
{

cout<<"The details are:\n";
cout<<"rollno"<<rollno;
cout<<"name"<<name;
cout<<"marks"<<marks;

}

};


int main()

{

students s;
s.getdata();
s.putdata();

return 0;
}


