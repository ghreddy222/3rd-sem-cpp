#include<iostream>
using namespace std;
void swap(int &i,int &j)
{
	int t;
	t=i;
	i=j;
	j=t;
	
}
int main()
{
	int a=10,b=20;
	swap(a,b);
	cout<<a<<b;
	return 0;
}
