#include<stdio.h>

main()
{
	int a=7;
	int k=3;
	if((1<<k-1)&a)
	{
		printf("3rd bit of seven is set \n");
	}
	else
	{
		printf("3rd bit of 7 is not set \n");
	}
}
