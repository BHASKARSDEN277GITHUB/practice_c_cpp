#include<iostream>
using namespace std ;

int main()
{
float array[20] ;
float *pointer = &array[0] ;
int n ;
cout<<"Enter no of values u want to enter "<<endl ;
cout<<"Enter float values . one by one ."<<endl ;
int i ;
float count =0 ,sum=0 ;
for(i=0;i<n;i++)
{
cin>>*pointer ;
count++ ;
sum = sum+*pointer ;

}

float average = (sum)/count ;
cout<<"average is : "<<average<<endl ;
return 0 ;

}
