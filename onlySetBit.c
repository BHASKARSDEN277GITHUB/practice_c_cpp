#include<stdio.h>

main()
{
	int n ;
	int pos =1;
	scanf("%d",&n);
	
	while(1)
	{
		if(n&1==1) //using AND	 bit operator ..
		break;
		
		else
		{
			n>>=1;  // shifting each bit every time to the right ..
			pos++;
		}
	}
	
	printf("%d\n",pos);
	
}
