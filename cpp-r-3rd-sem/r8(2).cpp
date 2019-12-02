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

class B: private A 
{
public : 
void display()
{
getdata();
cout<<b<<c<<endl;
}
void sum()
{
cout<<b+c<<endl;
}
};
int main ()
{
B o;
o.display();
o.sum();
return 0;
}
