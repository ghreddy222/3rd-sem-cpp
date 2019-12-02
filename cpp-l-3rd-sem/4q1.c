#include<stdio.h>
main()
{
int n,rev=0,r,p;
printf("Enter a number:");
scanf("%d",&n);
p=n;
while(n!=0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
if(rev==p)
{
printf("It is a Palindrome number\n");
}
else
{
printf("It is not a Palindrome number\n");
}
}



