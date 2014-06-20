#include<stdio.h>
#include<conio.h>

int main()
{
    int a[] = {3,4,1,5,7,2};
    int *p = a ;
    
    int check = 0 ;
    int smallest = *p ;
    p++;
    while(check<7)
    {
          if(smallest > *p)
          smallest=*p ;
          p++;
          check++; 
    }
    printf("%d",smallest);
    
    getch();
    return 0 ;
}
