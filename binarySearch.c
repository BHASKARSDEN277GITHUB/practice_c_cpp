// implementin binary search algorithm ..

#include<stdio.h>
#include<conio.h>

//enum boolean{true ,false} ; //defining a datatype boolean and creating its object flag ..

void binarySearch(int,int,int); //arguments : int element to find and size of array ..
int array[10];
main()
{
      int i=0 ;
     // enum boolean flag ;
      while(i<10)
      {
                 array[i]=i;
                 i++;
      }
      
      binarySearch(9,0,9);
      
      
      getch();
}

void binarySearch(int num , int low , int high) //low starting index , high closing index value ..
{
     //enum boolean flag ;
     int size = high-low+1 ;
     if(low!=high)
     {
     
                
                int n = size/2 ;
                if(array[n]==num)
                  printf("found");
                   else
                   {
                                  if(array[n]<num)
                                  {
                                                  binarySearch(num , n+1,9);
                                  }
                                  else
                                                  binarySearch(num,0,n-1);   
     
                   }
     }
     
}
