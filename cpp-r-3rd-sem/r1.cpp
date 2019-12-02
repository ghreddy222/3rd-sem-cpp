#include<iostream>
using namespace std;
int a,b;
int p,q;
class swapping
{
	
	public:
		void getdata()
		{
			cout <<"enter numbers to swap using pointers";
			cin>>a>>b;
			cout <<"enter numbers to swap using refernce";
			cin>>p>>q;
			
		}
		void swapp(int *a,int *b)
		{
			int t;
			t=*a;
			*a=*b;
			*b=t;
		}
		void swapr(int &p,int &q)
		{
			int r;
			r=p;
			p=q;
			q=r;
		}
		void display()
		{
			cout <<"swaping using pointers";
			cout <<a<<b;
			cout <<"swaping using reference";
			cout  <<p<<q;
			
		}
	};
	int main ()
	{
		swapping e;
		e.getdata();
		e.swapp(&a,&b);
		e.swapr(p,q);
		e.display();
		return 0;
	}
		

