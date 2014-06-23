//using dynamic problem solving approach ...

#include<stdio.h>
#include<stdlib.h>

int max(int , int); //utility function to return maximum of two numbers ..

main()
{
	char a[10] , b[10] ; //buffers to store input strings ..
	gets(a);
	gets(b);

	int s1=strlen(a);
	int s2=strlen(b);
	int DPA[s1+1][s2+1]; //dynamic problem array .. ;)

	printf("Max length of string 1 = %d , Max length of string 2 = %d \n",s1,s2);
	int i , j ; //iterators ..
	
	 //main logic here ..
	
	for(i=0;i<=s1;i++)
	{
		for(j=0;j<=s2;j++)
		{
			if(i==0 || j==0)
			DPA[i][j]=0;
			
			else if(a[i-1]==b[j-1])
			DPA[i][j]=DPA[i-1][j-1]+1;
			
			else
			DPA[i][j]=max(DPA[i-1][j],DPA[i][j-1]);
		}

	}
		
	
	printf("Maximum Subsequence length is = %d \n\n",DPA[s1][s2]);

}

int max(int a , int b)
{
	return (a>=b) ? a:b ;
}
