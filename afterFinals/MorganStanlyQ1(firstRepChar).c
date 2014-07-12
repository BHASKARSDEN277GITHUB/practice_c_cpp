#include<stdio.h>


void insertInHash(char c,int *);  //to insert the char count in hashTable ..
int getCount(char c,int*); //to get the count of the character from the hashTable ..


//driver function to test the program ..

main()
{
	int i=0; //iterator ..

	//creating the hashTable .. (array of integers size (256));
	int hashTable[256];

	//initializing the hashTable elements with 0 ..
	for(i=0;i<256;i++)
	{
		hashTable[i]=0;
	}


	char inString[10];
	char *p = inString ;
	int count=0;

	//reading the string from standard input  ..
	gets(p);
	
	//entering the string characters in hash (actually der count it is)..
	while(*p!='\0')
	{
		insertInHash(*p,hashTable);
		p++;
	}
	
	//finding the first non repeating character ..
	p=inString;
	char firstNonRepChar;
	while(*p!='\0')
	{
		count=getCount(*p,hashTable);
		if(count==1)
		{
			firstNonRepChar=*p;
			break;
		}	
		else
		p++;
	}
	
	printf("First Non Repeating Character is : %c \n",firstNonRepChar);

}
		

void insertInHash(char c,int *hash)
{
	//increment the value of the hashentry corresponding to this character c ..
	
	hash[c]+=1;
}

int getCount(char c , int *hash)
{
	 //return the value of hashEntry corresponding to this character c ..
	return hash[c];
}
	
	

