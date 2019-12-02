#include<iostream>
using namespace std;
class student
{
	int roll;
public :
	student()
{
	roll=21;

}
int getid()
{
return roll;
}
};
class subject:public student
{
public:
int s[5];
void getmarks()
{
cout<<"Enter Marks"<<getid();
for(int i=0;i<5;i++)
{
cin>>s[i];
}
}
};
class result:public subject
{
public:
void dis()
{
cout<<"Result"<<getid();
for(int i=0;i<5;i++)
{
if(s[i]>=40)
{
cout<<"Pass"<<endl;
}
else
{
cout<<"Fail"<<endl;
}
}
}
};
int main()
{
result r;
r.getmarks();
r.dis();
return 0;
}
