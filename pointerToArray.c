#include<stdio.h>
#include<stdlib.h>


int main()
{
	int (*p)[2];
	int a[2][2]={(1,2),(2,3)};
	int **b;

	// p=&a[2][2];
	
	p=a;
	// b=p;
	printf("%d",(*p)[1]);
	
	return 0 ;
}
