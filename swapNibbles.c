#include<stdio.h>

main()
{
	int n ;
	scanf("%d",&n);
	int a = n<<4;
	int b =n>>4;
	printf("%d\n",(a|b)&0x00ff);
}
