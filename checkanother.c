#include<stdio.h>

main()
{
	
	char l[5];
	int sum =0;
	int count=0 ;
	int avg;
	gets(l);
	char *a=l;
	while(*a!='\0')
	{
		sum+=*(a++);
		count++;
	}
	avg=sum/count;
	printf("%d",sum/avg);
	
	
}
