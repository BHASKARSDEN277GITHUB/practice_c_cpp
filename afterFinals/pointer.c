#include<stdio.h>

main()

{
	int **p ;
	int a =5;
	int *p1=&a;
	p=&p1;
	printf("%d",**p);
}
