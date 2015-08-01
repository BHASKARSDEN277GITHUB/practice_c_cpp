#include<stdio.h>
#include<stdlib.h>

void reverse(int arr[], int si , int ei )
{
int temp;

if(si>=ei)
return;
temp = arr[si];
arr[si] = arr[ei];
arr[ei] = temp;
reverse(arr , si+1 , ei-1);

}
void printarray(int arr[] , int size)
{
int i;
for(i=0;i<size;i++)
{
printf("%d",arr[i]);
}

}

int main()
{
int arr[] = {1,2,3,4};
int size = sizeof(arr)/sizeof(arr[0]);

reverse(arr,0,size-1);
printarray(arr,size);

return 0;
}
