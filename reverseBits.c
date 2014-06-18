#include<stdio.h>


main()
{
	int n ;
	scanf("%d",&n);
	int reverse=0;
	int s=0;
	int nn=n;
	int i=0;

	while(nn)
	{
		nn=nn>>1;
		s++;
	}
	
	nn=n;
	
	while(s>0)
	{
		nn=n;
		nn=nn>>s-1;
		nn=nn&1;
		nn=nn<<i;
		reverse=reverse|nn;
		s--;
		i++;
	}
	
	printf("%d",reverse);

}
