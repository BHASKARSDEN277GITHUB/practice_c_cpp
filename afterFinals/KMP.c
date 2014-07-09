#include<stdio.h> 

void prefixTable(char *,int); //utility function to prepare prefix table ..
void matcher(char *,int,char *,int); //utility function to find position of found pattern .. in given Text ..

char LPS[20];

main()
{
	int l1; //l1 is length of pattern ..
	int l2; //l2 is lenght of text ..

	char text[40];
	char pattern[20];

	printf("Enter TEXT :\n");
	gets(text);
	printf("Enter PATTERN :\n");
	gets(pattern);

	
	//finding lengths of pattern and text ..

	l1=strlen(pattern);
	l2=strlen(text);
	
	//preprocessing , calculation of prefix table ..
	
	prefixTable(pattern,l1);
	int i ;
	for(i=0;i<l1;i++)
	{
		printf("%d | ",LPS[i]);
	}
	//find matches ..

	matcher(text,l2,pattern,l1);

}

void prefixTable(char *t,int length)
{
	int i =1;
	int len=0;
		
	LPS[0]=0;
	
	while(i<length)
	{
		if(t[i]==t[len])
		{
			len++;
			LPS[i]=len;
			i++;
		}
		
		if(t[i]!=t[len])
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

void matcher(char *t,int l1,char *p,int l2)
{
	int i=0;
	int j=0;
	
	while(i<l1)
	{
		if(t[i]==p[j])
		{
			if(j==l2-1)
			{
				printf("Pattern found at %d",i-j+1);
				return ;
			}
			else
			{
				j++;
				i++;
			}
		}
		else if(t[i]!=p[j])
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
