#include<iostream>
using namespace std;
class demo
{
	public :
		int roll;
		void fun()
		{
			roll=10;
		}
};
int main()
{
	demo d1;
	demo *d2=&d1;
	d1.fun();
	cout<<d1.roll;
	d2->fun();
	cout<<d2->roll;
	return 0;
}
