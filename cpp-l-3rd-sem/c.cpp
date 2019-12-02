#include<iostream>
using namespace std;

int main(){

int m[5][2],i;
string name[5];

cout<<"Enter the Name,Roll No. and Score of 5 students\n";

for(i=0;i<5;i++){
cin>>name[i]>>m[i][0]>>m[i][1];
}

cout<<"Roll No."<<"  "<<"Name"<<"\t"<<"Score"<<"\n";

for(i=0;i<5;i++){
cout<<m[i][0]<<"\t"<<name[i]<<"\t"<<m[i][1]<<"\n";
}

} 
