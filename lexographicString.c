#include<stdio.h>
#include<malloc.h>
#define MAX 100

void permute(char *); 
int getF(char *) ;
int getS(int , char *);
void swap(int ,int ,char *);
void sort(int ,int,char *);
int partition(int , int ,char *);
int n=0 ; //size of the string (input) ..
main()
{
	char str[MAX];
	gets(str);
	int a =100;
	int i =0 ;
	while(str[i]!='\0')
	{
		n++;
		i++;
	}
	
	
	sort(0,n-1,str);
	printf("%s\n",str);
	

	permute(str);
	
}

void permute(char *str)
{
	int f ,s ;
	int flag=0;
	
	while(flag!=-1)
	{
		f=getF(str);
		s=getS(f,str);
		if(f==-1)
		flag=-1;
		else
		{
			swap(f,s,str);
			permute(str);
		}
	}
}
	
int getF(char *str)
{
	int i = 0;	
	int f=-1 ;
	while(i<n-1)
	{
		if(str[n-i-2]<str[n-i-1])
	{	f=n-i-2; break ;}
		
		i++;
	}
	return f;
}

int getS(int f , char *str)
{
	int i =f;
	int s=f+1 ;
	char ch=str[f+1];
	while(i<n-1)
	{
		if(str[i+1]<ch&&str[i+1]>str[f])
		{
			ch=str[i+1];
			s=i+1;
		}
		i++;
	}
	return s;
}

void swap(int a,int b,char *str)
{
	char temp ;
	temp=str[a];
	str[a]=str[b];
	str[b]=temp;
	
	sort(a+1,n-1,str);
	printf("%s\n",str);
}

void sort(int a , int b,char *str)
{
	int p ;
	if(a>=b)
	{
		return ;
	}
	else
	{
		p=partition(a,b,str);
		sort(a,p-1,str);
		sort(p,b,str);
	}
}

int partition(int a ,int b,char *str)
{
	int pivot=str[b];
	int i , j ;
	i=a-1;
	j=a;
	char temp ;
	//printf("%s\n",str);
	while(j<b)
	{
		if(str[j]<=pivot)
		{
			temp=str[j];
			str[j]=str[++i];
			str[i]=	temp;
			j++;
			//printf("%c\n",str[j]);
		}
		else
		j++;
	}
	
	
	temp=str[b];
	str[b]=str[i+1];
	str[i+1]=temp;
	//printf("%d\n",i);
	//printf("%s\n",str);
	
	return i+1;
}

