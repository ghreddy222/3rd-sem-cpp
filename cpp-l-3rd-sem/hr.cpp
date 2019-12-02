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


class f:public student
{
public :
int s[5],sum;
void getmarks()
{
sum=0;
cout<<"Enter Marks for 1st year"<<endl;
for (int i=0;i<5;i++)
{
cin>>s[i];
sum=sum+s[i];
}
}
void print()
{
cout<< "Result"<<getid()<<endl;
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







class s:public student
{
public :
int s[5],sum;
void getmarks()
{
sum=0;
cout<<"Enter Marks for 2nd year"<<endl;
for (int i=0;i<5;i++)
{
cin>>s[i];
sum=sum+s[i];
}
}
void print()
{
cout<< "Result"<<getid()<<endl;
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




class t:public student
{
public :
int s[5],sum;
void getmarks()
{
sum=0;
cout<<"Enter Marks for 3rd year"<<endl;
for (int i=0;i<5;i++)
{
cin>>s[i];
sum=sum+s[i];
}
}
void print()
{
cout<< "Result"<<getid()<<endl;
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




class fo:public student
{
public :
int s[5],sum;
void getmarks()
{
sum=0;
cout<<"Enter Marks for 4th year"<<endl;
for (int i=0;i<5;i++)
{
cin>>s[i];
sum=sum+s[i];
}
}
void print()
{
cout<< "Result"<<getid()<<endl;
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



int main ()
{
f r1;
s r2;
t r3;
fo r4;


r1.getmarks();
r1.print();

r2.getmarks();
r2.print();

r3.getmarks();
r3.print();

r4.getmarks();
r4.print();


}

