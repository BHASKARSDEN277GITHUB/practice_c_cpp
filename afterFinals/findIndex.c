#include<stdio.h>

void bubbleSearch(int ,int,int,int*) ;

main()
{
	int v,n;
	scanf("%d",&v);
	scanf("%d",&n);
		
	int array[n];
	int i ;
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	int *P=array;
	bubbleSearch(0,n-1,v,P);
}

void bubbleSearch(int start,int end,int number,int *p)
{
	if(start<=end)
	{
	int center=(int)(end+start)/2;
	if(p[center]==number)
	{
		printf("%d",center);
		return;
	}
	else
	{
		if(number<p[center])
		bubbleSearch(start,center-1,number,p);
		else
		bubbleSearch(center+1,end,number,p);
	}
	}
}

