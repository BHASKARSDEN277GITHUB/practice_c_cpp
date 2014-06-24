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
              printf("%d \n",a[count]);
    }
    printf("\n");
    count=0;    
    while(count<9)
    {
                     if(a[i]%2 == 0)
                     {
                              // printf("%d",a[i]);
                                i++;
                                      //just increment the pointer ..
                     }
                     else  
                     {          printf("%d odd element deleted \n",a[i]);
                                swap(i); //swapping i index onwards .. deleting element at index i ..
                                
                                
                     }
 
                  count++;  
    }
   printf("\nNew Array\n");
    for(count =0;count<size;count++)
    {
              printf("%d \n",a[count]);
 
              
    }
    getch();
    return 0;   
}


void swap(int index) 
{
 //printf("swap");
 while(index<size)
 {
               a[index]=a[index+1];
               index++;
 }
 size--;    
}
