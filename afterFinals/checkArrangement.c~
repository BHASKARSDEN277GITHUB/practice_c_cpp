#include<stdio.h>

main()
{
	int t , n;
	scanf("%d",&t); // Number of testcases ..
	while(t--)
	{
	int k; //sum ..
	scanf("%d",&n);
	scanf("%d", &k);
	int a[n],b[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	
	int temp;
	int j;
	int checkSum;
	int flag=0;
	
	for(i=0;i<n;i++)
	{
		checkSum=k-a[i];
		flag=0;
		for(j=i;j<n;j++)
		{
			if(b[j]==checkSum) //mil gya ..
			{
				temp=b[j];
				b[j]=b[i];
				b[i]=temp;
				flag++;
				break;
			}
		
		}
		if(flag==1)
		continue;
		else
		{
			flag=-1;
			break;
		}
		
	}
	
	if(flag==-1)
	printf("NO\n");
	else
	printf("YES\n");
	}
}

