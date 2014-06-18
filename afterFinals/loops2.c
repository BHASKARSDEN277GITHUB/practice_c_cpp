//practice problem 2 ..
#include<stdio.h>
int main()
{
	int x , i=1 , j , k , a , b , swap ;
	printf("Enter value of variable x (should be even) \n") ;
	scanf("%d",&x);
	a=x ; b=x/2 ;
	//printf("%d%d\n",a,b);	
	while(i<=x)
	{	
		for(j=1;j<=b;j++)
		{
			printf("*");
		}
		
		printf(" ");

		for(k=1;k<=a;k++)
		{
			printf("*");
		}
		printf("\n") ;
  		swap = a ;
		a=b ;
		b=swap ;

		i++ ;

	}

return 0 ;
}

