#include<stdio.h>

main()
{
	char str[20];
	gets(str);

	char *current=str;
	char *prev=str;
	char *new=current;
	int count=0;
	char c;
	printf("%s\n",str);
	while(*current!='\0')
	{

			if(*prev==*current)
			{
//				printf("%c\n",*current);
				count++;
				current++;
			}
			else
			{
				c=*current;
				new++;
				*(new)=count+'0';
				new++;
				*(new)=c;
		//		printf("%c",*new);
				*prev=c;
				count=1;
				current++;
			}

		
	}
	*(++new)=count+'0';
	*(++new)='\0';
	printf("%s \n",str);
}
		
