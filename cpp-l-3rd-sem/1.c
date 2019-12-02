#include<stdio.h>
main()
{
int a=0,b=1,c,i;
printf("The fabonacci numbers for 1st 10 Digits:\n0\n1\n");
for(i=0;i<8;i++)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}
}




