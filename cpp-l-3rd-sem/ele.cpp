#include<iostream>
using namespace std;
int main()
{
 int n,x=0,i,ch,a=0,b=0,c=0,d=0,e=0;
 cout<<"Enter total num of Voters:";
 cin>>n;
 for(i=0;i<n;i++)
 {
  cout<<"\nVote For truth \ncandidate 1 \ncandidate 2 \ncandidate 3 \ncandidate 4 \ncandidate 5\nEnter vote for:";
  cin>>ch;
switch(ch)
{
case 1:a++;
break;
   
 case 2:b++;
   break;
   
 case 3:c++;
   break;
   
 case 4:d++;
   break;
   
 case 5:e++;
   break;
   
   default:x++;
break;
  }
  
 }
 
 
 cout<<"\nTotal votes for 1 is:"<<a<<endl;
 cout<<"\nTotal votes for 2 is:"<<b<<endl;
 cout<<"\nTotal votes for 3 is:"<<c<<endl;
 cout<<"\nTotal votes for 4 is:"<<d<<endl;
 cout<<"\nTotal votes for 5 is:"<<e<<endl;
 cout<<"\nTotal Invalid votes :"<<x;
 return 0;
}
