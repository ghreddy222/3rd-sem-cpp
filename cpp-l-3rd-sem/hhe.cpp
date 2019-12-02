#include<iostream>
using namespace std;
inline int large(int a,int b,int c)
{
	int largest;
if(a>b)
{
if(a>c)
{
largest=a;
}
else
{
largest=c;
}
}
else
{
if(b>c)
{
largest=b;
}
else
{
largest=c;
}
}
return largest;


}
int main()
{
int a,b,c;
cin>>a;
cin>>b;
cin>>c;
int largest =large(a,b,c);
cout<<"LARGE ="<<largest<<endl;
return 0;
}



