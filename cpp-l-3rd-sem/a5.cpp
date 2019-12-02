    
#include<iostream>
#include<string.h>
using namespace std;

class String
{
	char *s;
public:
	String()
	{
	    s = new char[0];
	    s == NULL;
	}
	String(char *v)
	{
		s = new char[strlen(v)];
		strcpy(s,v);
	}
	void display()
	{
	    if(s == NULL)
            cout<<"NULL string ";
		cout<<s;
	}


	friend String Concate(const String & s1, const String & s2)
	{
		String s3;
		s3.s = new char [strlen(s1.s) + strlen(s2.s)];
		s3.s = strcat(s1.s,s2.s);
		return s3;
	}


	friend void copy(String &s1, const String & s2)
	{
		strcpy(s1.s, s2.s);
	}
	String(String &s1)
	{
	    s = new char[strlen(s1.s)];
	    strcpy(s, s1.s);
	}

};

int main()
{
	String s1("well done");
	String s2("Hemanth");
	String s3;
	cout<<"\nS1 = ";
	s1.display();
	cout<<"\nS2 = ";
	s2.display();
	
	
	cout<<"\nAssign s1 to s3";
	copy(s3,s1);
	
	cout<<"\nS3 = ";
	s3.display();
	
	
	cout<<"\nAssign String s2 to s3";
	s3=s2;
	cout<<"\nS3 = ";	
	s3.display();
	
	
	cout<<"\nConcate two string s1 and s2 ";
	
	s3=Concate(s1,s2);
	cout<<"\nS3 = ";
	s3.display();
	return 0;
}
