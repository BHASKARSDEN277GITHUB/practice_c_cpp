

//remove all occurances of b and ac from input string ..


#include<stdio.h>

main()
{
	char str[10] ;
	char *p ;  // pointer to character .. for copying chars  ..
	gets(str);
	p=str ;
	int i =0;
	while(str[i]!='\0')
	{
		if(str[i]=='b')
		{
			i++;
		}
		else if(str[i]=='a')
		{
			if(str[i+1]=='c')
			{
				i+=2;	//incrementing the index by two .. to go ahead c ..
			}
			else
			{	
				*p=str[i];
				i++;
				p++; //incrementing the pointer value ..
			}
			
		}
		
		else
		{
			*p=str[i];  //copying the char ..
			p++;
			i++;				
		}
	}

	*p='\0'; //terminating the string ..
	 
	printf("%s",str); //printing the new string ..	
}
	
