#include<stdio.h>

main()
{
	int n ; //number of bits ..
	printf("Enter length of binary string : \n");
	scanf("%d",&n);
	int i=0; //iterator ..
	
	//main code here .. it  can be soved as a dynamic problem ..
	int a[n] , b[n] ; // a[i] number of string ending with '0' and b[i]=number of string ending with '1' ..
	a[0]=1;b[0]=1;
	for(i=1;i<n;i++)
	{
		a[i]=a[i-1]+b[i-1] ;
		b[i]=a[i-1];
	}
	printf("\nNumber of binary strings containing no consecutive 1's : %d \n",a[n-1]+b[n-1]);
}
