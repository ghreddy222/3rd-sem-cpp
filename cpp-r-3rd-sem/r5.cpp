#include<iostream>
using namespace std;
class geo
{
public:
      

void area(int r)   
{

          cout<<"Area of Circle: "<<(3.14*r*r);
}
void area(float a) 
{
 
  cout<<"Area of Cube: "<<(6*a*a);
}
void area(int l,int b)
{

     cout<<"Area of Rectangle: "<<(l*b);
}
};
int main()
{
           geo g;
int radius;
float side;
int length,breadth;
cout<<"Enter Radius For circle";
            cin>>radius;
g.area(radius);
cout<<"Enter Length Cube";
            cin>>side;        
g.area(side);         
 cout<<"Enter L&B for Rectangle: ";
            cin>>length>>breadth;
g.area(length,breadth);    
}
