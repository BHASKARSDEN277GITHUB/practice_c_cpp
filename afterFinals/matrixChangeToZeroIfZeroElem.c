#include<stdio.h>

//driver function to run the test cases ..

main()
{
	int m,n ; //row,column ..
	scanf("%d%d",&m,&n);
	int matrix[m][n]; //mxn matrix ..
	int i , j , k  ,l , r, c; //iterators ..
	//reading the matrix values ..
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	
	//printing the input matrix ..
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",matrix[i][j]);
		}
		printf("\n");
	}

	//doing the job here ..
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(matrix[i][j]==0)
			{
				k=i;
				l=j;
					
				for(r=0;r<m;r++)
				{
					matrix[r][l]=0;
				}
				for(c=0;c<n;c++)
				{
					matrix[k][c]=0;
				}
			}
		}
	}
	
	//printing the output matrix ..
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",matrix[i][j]);
		}
		printf("\n");
	}
}
