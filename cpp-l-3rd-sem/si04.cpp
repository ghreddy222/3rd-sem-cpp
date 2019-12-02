#include<iostream>
using namespace std;
class A 
{
private:int a;
public:int b;
protected:int c;

public:
void getdata()
{
cin>>a>>b>>c;
}
};

class B: public A 
{
public : 
void display()
{
z=getdata();
cout<<
}
};
int main ()
{
B o;
o.display();
return 0;
}
