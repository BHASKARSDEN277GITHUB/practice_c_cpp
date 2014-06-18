#include<stdio.h>


void d(void);

main()
{
	printf("hello\n");
	d();
	printf("bye\n");
	
}

void d()
{
	printf("hello hello\n");
	abort();
	printf("bye bye\n");
}
