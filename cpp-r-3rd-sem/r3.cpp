#include<iostream>
#include<string.h>
using namespace std;
class pal
{
int len,i;
char string[20];
public:
	void getdata();
	int putdata();
};
void pal::getdata()
{
	cout<<"Enter string";
	cin>>string;
	if(putdata())
	{
	cout<<"It is a Palindrome";
	}
	else 
	{
	cout<<"It is Not a palindrome";
	}
}
int pal::putdata()
{
len=strlen(string);
for(i=0;i<len/2;i++)
{
if(string[i]!=string[len-1-i])
return 0;
}
return 1;
}
int main()
{
pal e;
e.getdata();
e.putdata();
}
