#include<stdio.h>

main()
{
	int n ; //size of input array ..
	scanf("%d",&n);
	int i,j ; //iterators ..
	int array[n] ;
	int newarray[n];
	//scan the array ..

	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}

	//Main task here ..

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]<array[j])
			{
				newarray[i]=array[j];
				break;
			}
		}
	}
	
	newarray[n-1]=-1;
	
	for(i=0;i<n;i++)
	{
		printf("%d  | ",newarray[i]);
	}
}
			
		
		
	
