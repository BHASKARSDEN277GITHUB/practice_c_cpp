//sorting using quicksort ..


#include<stdio.h>
#include<conio.h>

int a[10];
void quicksort(int [] , int , int);
int partition(int [] , int , int);
main()
{
      int i = 0 ;
      printf("ENter elements to be sorted int array \n");
      printf("Hit any key to stop entering elements\n");
      while(i<10)
      {
                     scanf("%d",&a[i]);
                     i++;
      }
      quicksort(a,0,9);
      i=0;
      while(i<10)
      {
                     printf("%d",a[i]);
                     i++;
      }
      getch();
}

void quicksort(int b[10] ,int p ,  int r)
{
     int q ;
     if(p<r)
     {
            q =  partition(b,p,r);
            quicksort(a,p,q-1);
            quicksort(a,q+1,r);
     }
}

int partition(int b[10] , int p , int r)
{
    int i = p-1 ;
    int temp ;
    while(p<r)
    {
              if(a[p]<a[r]) //taking a[r] as pivot elements here ...
              {
                            
                            i++;
                            temp = a[p]; //swapping a[i]  and a[p]  ..
                            a[p]=a[i];
                            a[i]=temp;              
              }
              p++;          
    }
    //swap a[i+1] and a[r] ..
    temp = a[r] ;
    a[r]=a[i+1];
    a[i+1]=temp ;
    
    
    return i+1 ;
}
