#include<stdio.h>

void permute(char *); //utility function to to print permutations recursively ..
int getFirstChar(char *); //to return index of first char ..
int getSecondChar(char * , int ) ; //to return index of second char ..
void sort(char *i,int , int);
int size=0 ; //size of input string ..

main()
{

	char input[10]; //character array of input string ..
	scanf("%s",input); //reading input string from console ..
	int i=0;
	
	while(input[i]!='\0')
	{
		size++;
		i++;
	}
	
	printf("%d\n",size);
	
	sort(input,0,size-1);
	printf("%s\n",input); //printing the original string ..
	permute(input); //calling the permute function ..
	
	
}

void permute(char *str)
{
	int f=-1 ;
	int s=-1 ;
	char temp ;
	
	f=getFirstChar(str);
	
	if(f!=-1)
	{
		s=getSecondChar(str,f);
		
		temp=str[f];
		str[f]=str[s];
		str[s]=temp;
		
		sort(str,f+1,size-1);
		printf("%s\n",str);
	
		permute(str);
	}
}
	
int getFirstChar(char *str)
{
	
	int i=0 ;
	int index=-1 ;
	
	for(i=size-1;i>0;i--)
	{
		if(str[i]>str[i-1])
		{
			index=i-1;
			break;
		}
	}
	
	return index;
}

int getSecondChar(char *str,int f)
{
	
	int index=f+1;
	int i=0;
	
	for(i=f+1;i<=size-1;i++)
	{
		if(str[i]>str[f] && str[i]<str[index])
		{
			index=i;
		}
	}
	
	return index ;
}

void sort(char *str , int i  , int j)
{
	
	char pivot=str[j];
	int temp=i-1;
	int temp1=i;
	char temp3 ;
	
	
	if(temp1>=j)
	{
		return ;
	}
	else
	{
	//partitioning the string ..

	while(temp1<j)
	{
	if(str[temp1]>pivot)
	{
		temp1++;
	}
	else
	{
		temp++;
		temp3=str[temp1];
		str[temp1]=str[temp];
		str[temp]=temp3;
		
		temp1++;
	}
	}
	
	temp3=str[j];
	str[j]=str[temp+1];
	str[temp+1]=temp3;
	
	sort(str,i,temp);
	sort(str,temp+1,size-1);

	
	}
}
