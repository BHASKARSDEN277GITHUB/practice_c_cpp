#include<stdio.h>

int getLength(char *); //to get the length of input string ..
void printComb(char *,char *); //recursive function to print the permutations ..

char mapping[10][4] ; //2-d character array to store mapping of digits according to a phone keypad ..
char current[10];
int len=0;
int counter=0;

main()
{
	//setting the mapping array ;
	char string[5];
	char *s=string;
	char *c=current;
	
	printf("Enter digit string consisting of digits 2 , 3 , 4\n");
	scanf("%s",string);

	mapping[2][0]='a';
	mapping[2][1]='b';
	mapping[2][2]='c';
	mapping[2][3]='\0';

	mapping[3][0]='d';
	mapping[3][1]='e';
	mapping[3][2]='f';
	mapping[3][3]='\0';

	mapping[4][0]='g';
	mapping[4][3]='\0';
	mapping[4][1]='h';
	mapping[4][2]='i';

	len=getLength(s);
	printf("Possible combinations are : \n");
	printComb(s,c);
	
}


int getLength(char *s)
{
	int a=0;
	while(*s!='\0')
	{
		a++;
		s++;
	}
	return a;
}

void printComb(char *s,char *c)
{
	
	char *cur=c;
	char *str=s;
	int index=*s-'0';
	int i=0;

	if(*str=='\0')
	return;
	
	
	
	while(mapping[index][i]!='\0')
	{
		cur=c;
		str=s;
		*cur=mapping[index][i];
		*(cur+1)='\0';
		counter=getLength(current);
		if(counter==len)
		printf("%s\n",current);
		printComb(++str,++cur);
		i++;
	}
}
		






