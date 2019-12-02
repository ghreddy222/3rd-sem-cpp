#include<iostream>
using namespace std;
class de
{
public:
void fun(int i,int j=1)
{
cout<<i+j;
}
};
int main ()
{
de d;
d.fun(10,20);
d.fun(2);
return 0;
}
