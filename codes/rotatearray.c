#include<stdio.h>
#include<stdlib.h>

void rotate(int arr[] , int size , int d)
{
int i,j;
int temp[d];
for(j=0;j<d;j++)
{
temp[j] = arr[j]; 
}
for(i=d;i<size;i++)
{
arr[i-2] = arr[i];
}
int k;
for(j=0,k=size-d;k<size;k++,j++)
{
arr[k] = temp[j];
}
}
void printarray(int arr[] , int size)
{
int i;
for(i=0;i<size;i++)
{
printf("%d \t ",arr[i]);
}
}

int main()
{
int arr[] = {1,2,3,4,5,6,7};
int size = sizeof(arr)/sizeof(arr[0]);
int d=2;
rotate(arr,size,d);
printarray(arr,size);
return 0;
}
