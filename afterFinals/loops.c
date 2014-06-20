//solution to practice problem 1 ..
#include<stdio.h>
int main()
{
	int i , j=1 , n , p ;
	printf("Enter stars") ;
	scanf("%d",&n) ;
	while(2*j<=(n+2))	
	{
		p=2*j ;
		for(i=1;i<=n+2;i++)
		{
			if(i==2*j)
			printf("_");
    			else
			printf("*") ;
		}
		printf("\n") ;
		j++ ;
	}

return 0 ;
}
