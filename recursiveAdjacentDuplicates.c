// removing adjacents duplicates recursively ..

#include<stdio.h>

char removeA(char *); //function to remove adjacent duplicates recursively ..

main()
{
	char *str ,a ;
	printf("Enter String\n");
	scanf("%s",str);
	a=removeA(str);
	printf("\n");
	
}

char removeA(char *str)
{
	char temp,ret ;
	if(*str!='\0')
	{
		temp=*str ;
		ret=removeA(++str);

		
		
		if(ret==temp) //condition that adjacent character is same ..
		{
			return temp ;
		}
		else
		{
			printf("%c",temp);
			return temp ;
		}
		
	}
	else
	return '\0';
	


}

//done ..
