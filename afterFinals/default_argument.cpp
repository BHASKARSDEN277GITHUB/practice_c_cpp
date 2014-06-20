#include<iostream>
#include<conio.h>

using namespace std ;
double power_calc(double m ,int n=2) 
{      
       int i ;
       double result=1 ;
       for(i=0;i<n;i++)
       {
                       result=result*m ;
                      
       }
        return(result) ;
}



int main()
{
   double value ;
    double power_1 ;
    cout<<"Enter the number whose power is to be calculated ..\t"<<endl ;
    cin>>value ;
     power_1=power_calc(value,3) ;
    cout<<"The cube of value number is : \t"<<power_1<<endl ;
    
    power_1=power_calc(value) ;  
    
    cout<<"The square of the number is : \t"<<power_1<<endl ;
    getch() ;
    return 0 ;
    
}

 
