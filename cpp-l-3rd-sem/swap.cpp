#include<iostream>
using namespace std;
void swap(int*,int*);
void main()
{
int a,b;
cout<<"enter a ";
cin>>a;
cout<<"enter b";
cin>>b;
cout<<"before swaping"<<a<<b;
swap(&a,&b);
cout<<"after swaping"<<a<<b;
}
void swap(int *x,int *y)
{
int p;
p=*x;
*x=*y;
*y=p;

}


