#include<iostream>
using namespace std;
class cpy
{
 int a;
	public :
cpy(void)
{
a=10;

}
cpy(cpy &c)
{
a=c.a;
}
void sum(cpy c2)
{
cout<< a+c2.a;

}
};
int main ()

{

cpy o1;
cpy o2(o1);
o1.sum(o2);
return 0;

}

