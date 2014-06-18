// check if string contains any duplicate characters without using any additional data structure ..

#include<stdio.h>

main()
{
	char string[10] ;
	gets(string); //reading input ..
	
	char *s=string;
	char *s1 ;
	printf("%d\n",sizeof(s1));
	int flag=0;
	while(*s!='\0')
	{
		s1=s+1;
		printf("MATCHING FOR %c : \n",*s);
		while(*s1!='\0')
		{
			if((*s)^(*s1))
			{
				printf("Matching with %c . No match \n",*s1);
			}
			else
			{
				printf("First duplicate character %c\n",*s);
				flag++;
				return ;
			}
			s1++;
		}
		s++;
	}
	
	if(flag==0)
	printf("No duplicate character found \n");
}
			
		
