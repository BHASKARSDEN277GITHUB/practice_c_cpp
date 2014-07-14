#include<stdio.h>
int maxSubarraySum(int * , int) ; //utility function to find the max subarray sum ..

//driver function to test the program ..
main()
{
	printf("Enter Total number of elements in the Array : \n");
	int n ;
	scanf("%d",&n);

	//reading array elements from the standard input ..
	printf("Enter elements of the array :\n");
	int i ;
	int array[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\n");
	
	//calling max subarray sum function ..
	int maxSum=maxSubarraySum(array,n);
	
	//printing the result ..
	printf("Max Sum of subArray is : %d \n",maxSum);
}

int maxSubarraySum(int *a,int n)
{
	int maxSoFar =0 ; //global maximum ..
	int maxAtCurrent =0; //max of current index (subarray) ..
	
	int i=0 ; //iterator ..
	
	//main logic here ..
	for(i=0;i<n;i++)
	{
		maxAtCurrent=maxAtCurrent+a[i];
		maxAtCurrent=(maxAtCurrent<0)?0:maxAtCurrent;
		maxSoFar=(maxSoFar<maxAtCurrent)?maxAtCurrent:maxSoFar;
	}
	
	return maxSoFar;
}

//done ..
