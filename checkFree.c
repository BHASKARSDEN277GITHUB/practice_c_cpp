#include<stdio.h>
#include<malloc.h>


main()
{
	char *c = NULL;
	c=(char *)malloc(sizeof(char));

	printf("%d\n",c);
	free(c);

	printf("%d\n",c);
	printf("PoINTER : FUCK YOU I'LL NOT CHANGE MY VALUE\n");
}
