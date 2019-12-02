#include<stdio.h>
int fact(int);
main()



{
int n,f;
printf("Enter a number:\n");
scanf("%d",&n);
f=fact(n);	
printf("factorial of %d is %d\n",n,f);
}



int fact(int n)
{
int value;
if(n==1)
{
value=1;
}
else if (n==0)
{
value=1;
}


else
{
value=n*fact(n-1);
}
return value;
}



