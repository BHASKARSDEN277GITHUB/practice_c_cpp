#include<stdio.h>
#include<stdlib.h>


int *findrightlargest(int arr[],  int size)
{

int i , j;
static int newarr[6];
for(i=0;i<size-1;i++)
{
int current = arr[i];
for(j=i+1;j<size;j++)
{
if(arr[j] > current)
current = arr[j];
else
current = current;
}
if(current > arr[i])
newarr[i]= current;
else if(current == arr[i])
newarr[i] = -1;
else 
newarr[i] = -1;
}
newarr[size-1] = -1;
/*for(i=0;i<size;i++)
printf("%d \t ",newarr[i]); */

return newarr;
}



int main()
{
int arr[] = {5,14,6,10,7,13};
int size = sizeof(arr)/sizeof(arr[0]);
 int *a = findrightlargest(arr,size);
int i;
for(i=0;i<size;i++)
{
printf("%d \t",*(a+i));}

return 0;
}
