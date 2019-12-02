#include<iostream>
using namespace std;
int main()
{
register int i;
int a,sum=0;
cout<<"Enter A";
cin>>a;
for(i=0;i<a;i++)
{
sum=sum+i;
}
cout<<"sum="<<sum;
return 0;
}
