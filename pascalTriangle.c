#include<stdio.h>

main()
{
	int n , i , j ; // n is size array and number of rows in pascal triangle ..
	int temp=1;
	int temp1 , k ;
	scanf("%d",&n);
	int array[n];
	
	array[0]=1;
	i=0;
	
	while(i<n)
	{
		temp=1;
		if(i==0)
		array[i]=1;
		else if(i==1)
		{
			array[0]=1;
			array[1]=1;
		}
		else
		{
			for(j=1;j<i;j++)
			{
				temp1=array[j];
				array[j]=temp+array[j];
				temp=temp1;
			}
			array[j]=1;
		}
		
		
		
		for(k=0;k<=i;k++)
		{
			printf("%d ",array[k]);
		}
		
		printf("\n");
		i++;
	}
}
	
