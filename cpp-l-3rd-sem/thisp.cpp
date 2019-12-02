#include<iostream>
using namespace std;
class emp
{
	int sal;
	public :
		emp()
		{
			sal=1000;
		}
		void fun()
		{
			int sal=500;
			if (this -> sal>sal)
			{
				cout <<sal;
			}
			else 
			{
				cout << sal;
				
			}
		}};
		int main ()
		{
			emp e;
			e.fun();
			return 0;
			
		}
