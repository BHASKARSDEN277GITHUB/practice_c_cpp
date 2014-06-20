#include<stdio.h>


main()
{
	int deck[52]; // array to store deck of cards ..
	int i , r ;
	int temp ;
	for(i=0;i<52;i++)
	{
		deck[i]=i+1;
	}
	
	for(i=0;i<52;i++)
	{
		r=i+(random()%(52-i));
		temp=deck[i];
		deck[i]=deck[r];
		deck[r]=temp;
	}
	
	for(i=0;i<52;i++)
	{
		printf("%d \t",deck[i]);
	}
}
