#include<iostream>
using namespace std;

class Electricity
{
        int unit, bill,sur;
        char name[20];
    public:
        void getdata()
        {
                cout<<"\n Enter Name   : ";
                cin>>name;
                cout<<"\n No. Of Units : ";
                cin>>unit;
        }
void putdata()
{
        if(unit<=100)
                bill=(50+(unit*0.60));
        else if(unit>100 && unit<=200)
                bill=(50+(unit*0.80));
        else if(unit>=300)
                bill=(50+(unit*0.90));
        
}
void display()
{
	if(bill>=300)
	{
            sur=(bill+(bill*0.15));
            cout<<"Name = "<<name<<endl;
			cout<<"Actual Bill = "<<bill<<endl; 
			cout<<"After Surcharge = "<<sur<<endl;		  
			}
else
{
       cout<<"Name = "<<name<<endl; 	
		cout<<"Actual Bill = "<<bill<<endl;
	
}
		  }};
int main()
{
        Electricity e[10];
        int i,cnt;
        cout<<"\n Enter How Many Customers You Want? : ";
        cin>>cnt;
        for(i=0; i<cnt; i++)
           {     e[i].getdata();
                e[i].putdata();
            }
                    for(i=0; i<cnt; i++)
                    {
                    	e[i].display();
					}
       return 0;
}
