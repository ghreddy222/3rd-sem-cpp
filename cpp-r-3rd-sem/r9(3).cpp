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
cout<<"Enter Marks For"<<getid();
for(int i=0;i<5;i++)
{
cin>>s[i];
}
}
};

class sport
{
int score;
public:
void getscore()
{
cin>>score;
}
void putscore()
{
cout<<score<<endl;
}
};



class result:public subject,public sport
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
putscore();
}
};
int main()
{
result r;
r.getmarks();
r.getscore();
r.dis();
return 0;
}
