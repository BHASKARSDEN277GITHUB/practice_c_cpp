#include<stdio.h>

main()
{
	int a=5;
	//turning off 3rd bit . it will become 1..
	int n=1<<2;
	n=~n;
	a=a&n;
	printf("%d",a);
}
