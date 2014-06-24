#include<stdio.h>
void substring(int,int); //index, length ..
char string[20] ;
main()
{
	gets(string);
	int startIndex;
	int length;
	scanf("%d%d",&startIndex,&length);
	substring(startIndex,length);
	printf("\n");
	
}
void substring(int i , int l)
{
	if(l>0)
	{
		printf("%c",string[i]);
		substring(++i,--l);
	}
}

