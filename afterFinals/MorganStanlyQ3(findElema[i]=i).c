#include<stdio.h>

//driver function to test the program ..
main()
{
	int array[10];
	printf("Enter array elements :\n");
	int i=0; //iterator  ..
	
	//reading array elements ..
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\n");

	//finding where array[i]=i ..
	int flag=0; //to check required condition is met or not ..
	for(i=0;i<10;i++)
	{
		if(array[i]==i)
		{
			printf("%d \n",i);
			flag++;
		}
	}
	
	if(flag==0)
	{
		printf("-1\n");
	}
}
	
