#include<iostream>
using namespace std;
class base
{
public:void show()
{
cout<<"Base show"<<endl;
}
virtual void display()
{
cout<<"Base"<<endl;
}
};
class derived:public base
{
public:void show()
{
cout<<"Derived show"<<endl;
}
void display()
{
cout<<"Derived"<<endl;
}
};
int main()
{
base b;
derived d;
base *b1;
b1=&b;
b1->show();
b1->display();
b1=&d;
b1->show();
b1->display();
return 0;
}
