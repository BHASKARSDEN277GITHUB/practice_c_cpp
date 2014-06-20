#include<stdio.h>


main()
{
	int m ,n ; //row and column count ..
	printf("Enter no. of rows and columns respectively\n");
	scanf("%d",&m);
	scanf("%d",&n);
	
	char matrix[m][n]; //creating 2d char array as matrix ..
	char ch='*';
	int l =0 , k=0; //start row and column indeces ..
	int i =0;
	int j=0;
	int a , b ;
	a=m;
	b=n;
	while(l<=n&&k<=m)
	{
		for(i=l;i<n;i++)
		{
			matrix[k][i]=ch;
		}
		//increment k as first row has been traversed ..
		k++;
		
		for(i=k;i<m;i++)
		{
			matrix[i][n-1]=ch;
		}
		
		n--;
	
		for(i=n-1;i>=l;i--)
		{
			matrix[m-1][i]=ch;
		}
		
		m--;
	
		for(i=m-1;i>=k;i--)
		{
			matrix[i][l]=ch;
		}
		
		l++;
		
		ch=(ch=='*')? 'o':'*';
	}
	
	m=a;
	n=b;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c",matrix[i][j]);
		}
		printf("\n");
	}
}

			
