#include<iostream>
using namespace std;

class fib 
{
int a,b;
public:
fib()
{
a= 0;  b = 1;
}
void fibs(int);
};

void fib::fibs(int n)
{ 
int i,x;
cout << a<< endl<<b<<endl;
for(i=1; i <= n-2; i++)
{
x=a+b;
cout << x<<endl;
a=b;  b=x;
            }
}

int main() 
{
fib o;
int n;
cin >> n;
o.fibs(n);
}

