#include<iostream>
using namespace std ;

template<class mytemp> //defining template function ..

mytemp calc(mytemp a)
{
cout<<"a"<<endl ;
}

int main()
{

int b =234234 ;

float c =423423.423423 ;

cout<<"Here this is integer value..\t"<<calc(b)<<endl ;

cout<<"now Here this is float value.."<<calc(c)<<endl ;

return 0 ;

}
