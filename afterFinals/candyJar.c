#include<stdio.h>
main()
{
	int n,m , a , b , k;
	scanf("%d",&n); //number of jars ..
	scanf("%d",&m); //number of operations to be performed ..
	int output[n];
	int i ;

	for(i=0;i<n;i++)
	{
		output[i]=0;
	}
	
	while(m--)
	{
		scanf("%d%d%d",&a,&b,&k); // reading input a , b and k ..
//		printf("%d%d%d",a,b,k);
		for(i=a-1;i<b;i++)
		{
			output[i]+=k;
		}
	}
	
	int sum=0;
	for(i=0;i<n;i++)
	{
//		printf("%d\n",output[i]);
		sum+=output[i];
	}

//	sum=sum/m;
	printf("%d\n",(int)sum/n);

}
