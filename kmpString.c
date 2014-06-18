#include<stdio.h>

void getLPS(char *,int); //function to get LPS array ie. values correspoinding to largest length of same prefix or suffix pattern ..
void findMatch(char *,char * , int , int); // to find if pattern matches or not ..

int lps[10];

main()
{
	char pat[10];
	char text[10];
	int m =0 , n=0 , i=0;
	gets(pat);
	gets(text); 
	
	while(pat[i]!='\0')
	{
		m++;
		i++;
	}
	
	i=0;
	
	while(text[i]!='\0')
	{
		n++;
		i++;
	}
	
	//printf("%d %d",m,n);
	getLPS(pat,m);
	/*
	for(i=0;i<m;i++)
	{
		printf("%d\n",lps[i]);
	}*/
	findMatch(text,pat,n,m);
}

void getLPS(char *pat,int m)
{
	int len=0;
	int i=1;
	lps[0]=0;
	while(i<m)
	{
		if(pat[i]==pat[len])
		{
			
			len++;
			lps[i]=len;
			i++;
		}
	
		else
		{
			if(len!=0)
			{
				len=lps[len-1]; //backtrack ..
			}
			else
			{
				lps[i]=0;
				i++;
			}
		}
	}
}

void findMatch(char *text,char *pat,int n,int m)
{
	int i =0 , len=0;

	
	
	while(i<n)
	{
		if(pat[len]==text[i])
		{
			i++;
			len++;
		}
		
		if(len==m)
		{
			printf("Pattern found \n");
			len=lps[len-1];
//			i++;
		}
		
		else if(pat[len] !=text[i])
		{
			
			if(len!=0)
			{
				len=lps[len-1];
			}
			else
			{
				i++;
			}
		}
	}
}
		
