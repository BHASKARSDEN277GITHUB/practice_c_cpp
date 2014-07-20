#include<stdio.h>

void permute(char *);
int getFirstChar(char *);
int getSecondChar(char *,int);
void quickSort(char *,int , int);

main()
{
	char str[20]; 
	printf("Enter String : \n");
	scanf("%s",str);
	
	printf("%d\n",strlen(str));
	quickSort(str,0,strlen(str)-1);
	printf("%s\n",str);

	//now call permute() ..
	permute(str);
}

void quickSort(char *str ,int start , int end)
{
	if(start<end)
	{
		int i=start-1 ;
		int j=start ;
		char temp ;
		char pivot=str[end];
		while(j<end)
		{
			if(str[j]<str[end])
			{	
				i++;
				//swap str[i],str[j] ..
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
				j++;
			}
			else
			{
				j++;
			}
		}

		i++;
		// swap str[i],str[end] ..
		temp=str[i];
		str[i]=str[end];
		str[end]=temp;
		
		//call quickSort again recursively on two halves ..
		quickSort(str,start,i-1);
		quickSort(str,i+1,end);
	}
	
}

void permute(char *str)
{
	int firstIndex=-1 ;
	int secondIndex=-1 ;
	char temp ;

	firstIndex=getFirstChar(str);
	if(firstIndex!=-1)
	{	
		secondIndex=getSecondChar(str,firstIndex);
	
		//swap elements at firstIndex and secondIndex ..
		temp=str[firstIndex];
		str[firstIndex]=str[secondIndex];
		str[secondIndex]=temp ;
		printf("%s\n",str);
		//sort str after the firstIndex ..
		quickSort(str,firstIndex+1,strlen(str)-1);
		printf("%s\n",str);
	//	printf("%c  %c  %d  %d\n",str[firstIndex],str[secondIndex],firstIndex,secondIndex);
		//call on permute on newly sorted Strig ..
		permute(str);
	}
}

int getFirstChar(char *str)
{
	int i=strlen(str)-1;
	int j=strlen(str)-2;
	int firstIndex;
	
	while(j>=0)
	{
		if(str[j]<str[i])
		{
			firstIndex=j;
			return firstIndex;
		}
		else
		{
			j--;
			i--;
		}
	}
	
	return -1;
}

int getSecondChar(char *str,int firstIndex)
{
	char firstChar=str[firstIndex];
	int i=firstIndex+1;
	char secChar=str[i];
	int cSecIndex=i;
	i++;
	while(i<strlen(str))
	{
		if(str[i]>firstChar && str[i]<secChar)
		{
			cSecIndex=i;
			return cSecIndex;
		}
	
		i++;
	}
	
	return cSecIndex;
}
	
	
		
		
