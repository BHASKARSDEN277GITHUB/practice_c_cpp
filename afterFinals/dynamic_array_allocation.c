#include<stdio.h>
#include<malloc.h>


main()
{
	int **array ;
	array=(int **)malloc(sizeof(int *)*5);
	
	*array=(int *)malloc(sizeof(int)*5);
	array++;
	*array=(int *)malloc(sizeof(int)*5);
	
	*(*(array)+1)=5;
	printf("%d",array[0][1]);
}

