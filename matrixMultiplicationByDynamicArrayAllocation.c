#include<stdio.h>
#include<malloc.h>

int** multiply(int **,int **); //utility function to multiply two matrices ..
void print(int **); //utility function to print the elements of matrix ..
int determinant(int **); //utility function to calculate determinant of the matrix ..

int n ; //size of matrix ..
main()
{
	int **matrix1 ;
	int **matrix2 ;
	int **resultMatrix;
	int i , j ;
	double det ;
	printf("Enter size of matrix : \n");
	//int n ;
	scanf("%d",&n);
	
	// Allocation memory (Array of pointers)..
	
	matrix1=malloc(sizeof(int *)*n);
	matrix2=malloc(sizeof(int *)*n);
	
	printf("Enter elements of first matrix : \n");
	
	j=0;

	
	for(j=0;j<n;j++)
	{
		matrix1[j]=malloc(sizeof(int)*n); //Allocatin memory for each element of array of pointers .. (each row ;) )..
		for(i=0;i<n;i++)
		{
			printf("Enter [%d][%d] element ",j,i);
			scanf("%d",&(matrix1[j][i]));
		}
		
		
	}

	printf("Enter elements of second matrix : \n");	
	j=0;
	
	for(j=0;j<n;j++)
	{
		matrix2[j]=malloc(sizeof(int)*n);
		for(i=0;i<n;i++)
		{
			printf("Enter [%d][%d] element ",j,i);
			scanf("%d",&(matrix2[j][i]));
		}
		
	}
	
	printf("Calculating the product of these two matrices .. \n");	
	resultMatrix=multiply(matrix1,matrix2);
	
	printf("Printing the result matrix ..\n");
	print(resultMatrix);
	
	printf("Calculating determinant of the result matrix .. \n");	
	det=determinant(resultMatrix);
	
	printf("Determinant of the matrix after result : \t %f\n",det);
}

int** multiply(int **matrix1,int **matrix2)
{
	int i , j , k ;
	int **resultMatrix ;
	
	resultMatrix=malloc(sizeof(int *)*n);

	for(i=0;i<n;i++)
	{
		resultMatrix[i]=malloc(sizeof(int)*n);
	}

	//Initializing all element values to zero ..
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			{
				resultMatrix[i][j]=0;				
			}
		
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			
			for(k=0;k<n;k++)
			{
				resultMatrix[i][j]=resultMatrix[i][j]+matrix1[i][k]*matrix2[k][j];				
			}
				//printf("%d\n",resultMatrix[i][j]);
		}
	
	}
	//print(resultMatrix);
	return resultMatrix;
}
	
void print(int **resultMatrix)
{
	int i , j ;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",resultMatrix[i][j]);
		}
		printf("\n");
	}				
}

int determinant(int **matrix)
{	
	double result = 0.0;
	double a = 1.0, b = 1.0 ;
	int i, row ;
	for (i = 0; i<n ; i++)
	{
	        for (row = 0; row<n; row++)
	        {
	            a *= matrix[row][(i+row)%n];
	            b *= matrix[row][(n-1) - (i+row)%n];
	        }
	     	
		   result += a-b ;
	}
	    
	return result;
}
