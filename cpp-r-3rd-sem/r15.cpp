# include<iostream>
using namespace std;

int main() 
{
    int n,marks[10];
    float avg=0,tot=0;
    cout<<"\n enter the no of subjects";
    cin>>n;
    try
        {
            if(n>0&&n<=10)
            {
            	cout<<"\n enter the marks of a student\n";
                for(int i=1;i<=n;i++)
                {
                    cout<<"enter marks of subject \t";
                    cin>>marks[i];
                    tot=tot+marks[i];
                }
            avg=tot/n;
            cout<<"\ntotal marks :\t"<<tot;
			cout<<"\n average of marks:\t"<<avg;
        }
    else if(n==0)
        throw (0);
    else if  (n>10)
        throw(10);
    }
    catch(int i)
    {
        cout<<"\n divide bu zero error...";
        
    }
    catch(float i)
    { 
        cout<<"\n array index out of bound";
    }
}

