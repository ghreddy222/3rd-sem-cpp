#include<iostream>
using namespace std;
class pow
{
public:
void po(double m,int n=2)
{
int i;
double sum=1;
for (i=0;i<n;i++)
{
sum=sum*m;
}
cout<<sum<<endl;
}};
int main()
{
pow p;
double m;
int n,l;
cout<<"Enter m and n";
cout<<"2 aug 1"<<endl;
cout<<"1 aug 2"<<endl;
cin>>l;
switch (l)
{
case 1:
cout<<"Enter values";
cin>>m>>n;
p.po(m,n);
break;
default:
cout<<"Enter values";
cin>>m;
p.po(m);
}
return 0;
}

