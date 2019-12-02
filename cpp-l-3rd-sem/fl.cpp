#include<iostream>
using namespace std;
class fld
{
public:
void sum (int a,int b)
{
cout<<a+b;
}
void sum (int a,int b,int c)
{
cout<<a+b+c;
}
void sum (float a,float b)
{
cout<<a+b;
}
};
int main ()
{
fld d;
d.sum(10,20);
d.sum(10.5f,20.2f);
d.sum(1,2,3);
return 0;
}
