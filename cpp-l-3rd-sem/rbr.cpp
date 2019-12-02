#include<iostream>
using namespace std;
int &large(int &, int &);
int main ()
{
	int l,k;
	cin>>l>>k;
	large(l,k)=120;
	cout<<l<<endl<<k<<endl;
	return 0;
}
int &large(int &i,int &j)
{
	if (i>j)
	{
		return i;
	}
	else
	{
		return j;
	}
}
