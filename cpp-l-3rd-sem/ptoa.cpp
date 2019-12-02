#include<iostream>
using namespace std;
int main ()
{
	int a[]={10,20,30,40,50};
	int *p[5];
	int sum=0;
	for (int i=0;i<5;i++)
	{
		p[i]=&a[i];
		sum=sum+*p[i];
		
	}
	cout<<"sum="<<sum;
	return 0;
}
