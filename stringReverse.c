//reversing the string ..

#include<stdio.h>
#include<string.h>
#include<malloc.h>

char * string ;
void  reverse(int) ;
char  *newString ;
int n;
int i ;
main()
{
	int j = 0 ;
	
	 
	string="bhaskar";
	n= sizeof(string);
	
	newString=(char *)malloc(sizeof(string));
	char  str ;   //to store the reversed string ..
	reverse(j); // 0 is the starting index of the first string character ..
	
	printf("%s",newString);
}

void  reverse(int i)
{	
	char a='a' ;
	char *c ;
	
	if(string[i+1]=='\0')
	{
		printf("%c",string[i]);
		*newString=string[i];
		newString++;
	}
	else
	{
		
		reverse(i+1);
		printf("%c",string[i]);
		*newString=string[i];
		newString++;
	}

}


