#include <iostream>
using namespace std;
#define MAX(a,b) a>b?a:b

int main(){
  int a,b,c,max;
  cout<<"Enter three numbers";
cin>>a>>b>>c;
  max = MAX((MAX(a,b)),c);
  cout<<"The greatest is"<<max;
}
