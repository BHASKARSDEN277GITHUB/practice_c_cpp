#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std ;
///.....template function.....////
template <class mytemp> // defining template class ..
mytemp calc(mytemp a)
{
           cout<<"a"<<endl ;
}

int main()
{
    int b=2324 ;
   float c=344.2 ;
    cout<<"Here this is integer value ...\t"<<calc(b) ;
    cout<<"Here this is float value ...\t"<<calc(c) ; 
    getch() ;
    return 0 ;
    
}       
