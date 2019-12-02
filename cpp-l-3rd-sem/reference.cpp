#include<iostream>
using namespace std;
int main()
{
int a=10;
int &i=a;
cout<<a;
cout<<i;
i=30;
cout<<a;
cout<<i;
return 0;
}
