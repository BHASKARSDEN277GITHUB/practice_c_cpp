#include<stdio.h>

void findLPS(char *,int);
void findPattern(char *,int,char *,int);

int LPS[20];

//drver function to test the program ..
main()
{
	char pattern[20];
	char text[20];
	printf("Enter the Text :\n");
	gets(text);
	printf("Enter the Pattern :\n");
	gets(pattern);

	//find lenghts of pattern and text ..
	int pat=strlen(pattern);
	int tex=strlen(text);

	//calculating the LPS array ..
	findLPS(pattern,pat);
	int i;

	//finding Pattern in the text ..
	findPattern(text,tex,pattern,pat);
}

void findLPS(char *pattern,int pat)
{
	int i=1 ; //index of pattern ..
	int len=0; //len of maximum proper prefix which is also a suffix ..
	
	LPS[0]=0; //settin first  elements of LPS as '0' ..
	
	while(i<pat)
	{
		if(pattern[i]==pattern[len])
		{
			len++;
			LPS[i]=len;
			i++;
		}
		else
		{
			if(len!=0)
			{
				len=LPS[len-1];
			}
			else
			{
				LPS[i]=0;
				i++;
			}
		}
	}
}

void findPattern(char *text,int tex,char *pattern,int pat)
{
	int i=0 ,j=0 ;

	while(i<tex)
	{
		if(text[i]==pattern[j])
		{
			if(j==pat-1)
			{
				printf("\nPattern found at index %d \n",i-j);
				return ;
			}
			else
			{
				i++;
				j++;
			}
		}
		else
		{
			if(j!=0)
			{
				j=LPS[j-1];
			}
			else
			{
				i++;	
			}
		}

	}
}

