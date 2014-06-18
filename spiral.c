#include<stdio.h> 
main()
{
	int min=0 , max=3;
	int matrix[4][4];
	int i =0 , j=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
	{
			scanf("%d",&matrix[i][j]);
		}
	}
		
	i=0;
	j=0;
	
	while(min<max)
	{
		printf("%d\n",matrix[i][j]);
		
		//updating indexes here now ..
	
		if(i==min&&j<max)
		j++;
		else if(j==max&&i<max)
		i++;
		else if(i==max&&j>min)
		j--;
		else if(j==min&&i==max)
          	{
			min++;
			max--;
			i--;
		}
		else if(j==min-1&&i>min)
		i--;
		else
		{//do noting..
		}
	
	}	
	
}		
