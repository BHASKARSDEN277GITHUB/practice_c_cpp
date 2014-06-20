#include<stdio.h>

main()
{
	int n ;
	scanf("%d",&n);
	int array[n];
	int i ;

	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	// partitioning code here ..
	
	int pivot=array[0];
	int p=0;
	int q=1;
	int temp;
	while(q<=n)
	{
		if(array[q]<=pivot)
		{
			p++;
			temp=array[q];
			array[q]=array[p];
			array[p]=temp;
			q++;

		}
		else
		q++;
	}
	
	temp=array[0];
	array[0]=array[p];
	array[p]=temp;

	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
}
		
			
