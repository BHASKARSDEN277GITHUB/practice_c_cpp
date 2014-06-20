#include<stdio.h>
#include<conio.h>
char * returnString(char * , char );
int main()
{
       char string[] = "hello bhai ji , kya kar rahe ho" ;
       char c = 'h' ;
       char * returnPointer ; 
       returnPointer=returnString(string,c);
       while(*returnPointer != '\0')
       {                    
                            c=*returnPointer ;
                            printf("%c",c);
                            returnPointer++ ;
       }
       //printf("Done\n");
       getch();
       return 0 ;
}

char * returnString(char *string , char ch)
{    int i =0 , j=0 ;
     int index =0;
     int size =0;
     while(string[i] != '\0')  //calculating size of string ..
     {
                     i++ ;
     }
     
     size = i ;
     //printf("%d",size);
     while(i>0)
     {
             if(string[j]=='h')
             {                 
                               index = j ;
                                while(index<=size)
                                {
                                            string[index]=string[index+1];
                                            index++;   
                                }
                                size--;
                               
             }
             else
             {
                 j++;
                
             }    
             
             
             i--;
             
     }
     //printf("Done2");
     
     return string ;
}
