#include<stdio.h>

int (*fpointer)(int , int);
int func(int,int);

main()
{
	int a=9,b=9;
	fpointer=func;
	printf("%d",fpointer(a,b));
	
}
int func(int a, int b)
{
	return a*b;
}
