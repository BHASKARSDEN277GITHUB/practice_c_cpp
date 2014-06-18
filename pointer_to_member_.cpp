#include<iostream>
#include<conio.h>

using namespace std ;

class A
{
      public :
      int a  ;
      int b ;
      
      A(int d,int e) ; //constructor function to class A ..
      
      
}
A::A(int d,int e) //defining constructor ..
{
      a=d ;
      b=e ;
}
      
int main()
{
   A c(3,4) ;
   A test ;
   //declaring pointer variables to class A's member functions ..
   int A::* ip =&A::a ;
   int A::* ip2=&A::b ;
   
   
   
   cout<<c.*ip<<endl<<c.*ip2<<endl ;
   getch() ;
   return 0 ;
   
}
