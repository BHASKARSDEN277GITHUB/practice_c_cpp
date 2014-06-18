//program to print all possible paths in matrix .. (m,n) order ..

#include<stdio.h>

int countPaths(int , int ) ; //fuction to claculate all paths from top left corner to bottom right corner ..

main()
{
	printf("Enter order of matrix\n");
	int m , n ;
	scanf("%d %d",&m,&n);
	printf("%d\n",countPaths(m,n));
}
int countPaths(int m , int n)
{
	if(m==1||n==1) //condition that there is only one column or only one row in the matrix ..
	{
		return 1;
	}
	else
	{
		return	countPaths(m-1,n)+countPaths(m,n-1);

	}
}
