#include<stdio.h>
#include<malloc.h>
#define size 10

main() {
	int **mat;
	mat=(int **)malloc(sizeof(int *)*size);
	mat[0]=(int *)malloc(sizeof(int)*size);
	mat[0][0]=10;
	printf("%d\n",*(*(mat+0)+0));
}
