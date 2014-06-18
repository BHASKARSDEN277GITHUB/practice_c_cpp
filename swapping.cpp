#include<stdio.h>
#include<conio.h>
void swap(int);
int a[] = {1,2,3,4,5,6,7,8,9};
int size =9 ;
int main()
{
    int i=0, count=0  ;
    
    for(count =0;count<size;count++)
    {
              printf("%d",a[count]);
    }
    printf("\n");
    for(count=0;count<9;count++)
    {
                     if(a[i]%2!=0)
                     {
                                i++;      //just increment the pointer ..
                     }
                     else
                     {
                                swap(i); //swapping i index onwards .. deleting element at index i ..
                                size--;  //decrement the size of array ..
                     }
                     
    }
    printf("%d",size);
    for(count =0;count<size;count++)
    {
              printf("%d",a[count]);
              printf("x");
              
    }
    getch();
    return 0;   
}
void swap( int index) 
{
     
 while(index<=size)
 {
               a[index]=a[index+1];
               
 }
 size--;    
}
