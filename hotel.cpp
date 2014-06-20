#include<iostream>
#include<stdio.h>

using namespace std ;

class hotel_system 
{

public :

char name ;
int room_number ;
char room_type ;
int days ;
int rent ;

void assign_room()
{
cout<<"Enter first character of the name of customer : \n" ;

cin>>name ;

room_number = 400 ;
cout<<"Enter no of days customer stayed : \n" ;

cin>>days ;

cout<<"Enter type of room customer stayed in : \n Enter L for luxury suit ... \n Enter N for normal room \n " ;
cin>>room_type ;

}


void deposit_amount()
{
cout<<"Enter amount to be deposited : \n " ;
cin>>rent ;
cout<<"Your rent amount has been deposited .. \n" ;

}


void update_days()
{

cout<<"Enter no of days customer want to stay : \n " ;
cin>>days ;


 
}


void display_info()
{


cout<<"Name : "<<name <<"\n Room number "<<room_number<<"\nType of room : "<<room_type<<"\nDays stayed : "<<days<<"\nTotal rent of customer : "<<rent ;

}


};


int main()
{

hotel_system hs1 ;
int choice ;
cout<<"Select your choice from the select menu ... \n Press 1 for ASSIGNING A ROOM ... \n Press 2 for DEPOSITING AMOUNT ... \n Press 3 for UPDATING NUMBER OF DAYS STAYED ...\n Press 4 to DISPLAY INFORMATION ... \n Press  0 to exit ...\n " ;

cin>>choice ;

while(choice!=0)
{

switch(choice)
{

case 1:
hs1.assign_room() ;
break ;
case 2:
hs1.deposit_amount() ;
break ;
case 3 :
hs1.update_days() ;
break ;
case 4 :
hs1.display_info();
break ;

default :
cout<<"Enter a valid choice ..\n " ;
break ;

}


}

return 0 ;

}

