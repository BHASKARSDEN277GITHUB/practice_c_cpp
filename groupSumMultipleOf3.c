// progarm to find all groups of two such that their sum is multiple of 3 ..

#include<stdio.h>


main()
{
	int n ; //size of array ..
	printf("Enter size of the array \n");
	scanf("%d",&n);
	int array[n]; //array to store numbers ..
	int i , j ;
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((array[i]+array[j])%3==0)
			printf("%d %d \n",array[i],array[j]);
		}
	}
	printf("\n");
		
}

//DONE..
