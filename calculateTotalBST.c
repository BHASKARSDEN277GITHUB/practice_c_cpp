#include<stdio.h>
int calculate(int); // a recursive function to calculate the total number of binary search trees possible ..

main()
{
	int n ;
	scanf("%d",&n);
	
       int total =calculate(n);
	printf("%d\n",total);
}

int calculate(int n)
{
	if(n==0||n==1)
	return 1;
	
	int k ;
	int left , right;
	int sum=0;

	for(k=1;k<=n;k++)  // making all numbers as nodes ..
	{
		left=calculate(k-1); // left subtree ..
		right=calculate(n-k); // right subtree ..
		sum+=left*right;
	}
	return sum ;
}
		
