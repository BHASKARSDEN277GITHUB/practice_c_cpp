#include<iostream>
using namespace std ;
int n ;

void call_float(float *, float *, float *) ;
int main()
{

float a[20] ,b[20] , c[20] ;

a[0]=1 ;
a[1]=2.5 ;
a[2]=3.06;
a[3]=444.2 ;
a[4]=111 ;
a[5]=12.24 ;
a[6]=12.56 ;

b[0]=1 ;
b[1]=2.5 ;
b[2]=3.06;
b[3]=444.2 ;
b[4]=111 ;
b[5]=12.24 ;
b[6]=12.56 ;

n= 7 ; // specifying size of arrays already ... no user input ..
call_float(&a[0],&b[0],&c[0]) ;
return 0 ;
}


void call_float(float *ptr1 , float *ptr2 , float *ptr3)
{
n=0;
while(n<7)
{
*ptr3=*ptr1+*ptr2 ;
cout<<"sum of"<<(n+1)<<"two elements of array is :"<<*ptr3<<endl ;
n++ ;
*ptr3++ ;
*ptr2++ ;
*ptr1++ ;
}
}

