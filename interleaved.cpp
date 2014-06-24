/ Find if a string is interleaved of two other strings ..

#include<iostream>
#include<malloc.h>

using namespace std ;

bool check(char * , char *,char *);

main()
{
	char * a  = (char *)malloc(8);
	cin>>a ;
	char * b = (char *)(malloc(8));
	cin>>b ;
	char * c = (char *)(malloc(8));
	cin>>c ;
	bool ch ;
	ch=check(a,b,c);
	
	if(ch)
	printf("Yes the given string is interleaved of the above two .. \n");
	else
	printf("No the given string is not the interleaved of the above two ..\n");
	
	
}

bool check(char * a, char * b, char *c)
{
	while(*c!='\0')
	{
		if(*a!='\0'&&*c==*a)
		{
			a++;
			c++;
		}
		else if(*b!='\0'&&*c==*b)
		{
			b++ ;
			c++ ;
		}
		else
		return false  ;
	}
	if(*c=='\0'&&*a=='\0'&&*b=='\0')
	return true ;
	else
	return false ;
}
