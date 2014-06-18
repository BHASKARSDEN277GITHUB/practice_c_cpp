#include<stdio.h>

main()
{
	char str[20];
	gets(str);
	char *c =str;
	char str1[20];
	char *c1=str1;
	while(*c!='\0')
	{
		if(*c==' ')
		{
			*c1++='%';
			*c1++='2';
			*c1++='0';
			c++;
		}
		else
		{
			*c1++=*c;
			c++;
		}
	}
	*c1='\0';
	printf("%s",str1);
}
