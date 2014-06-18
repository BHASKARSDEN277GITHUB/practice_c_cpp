#include<stdio.h>

struct a{
	
	char *c ;
	struct student point ;
};

main()
{
	struct a obj ;
	obj.c="clear";
	printf("%s",obj.c);
}
