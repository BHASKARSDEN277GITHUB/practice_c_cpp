// printing all permutations in lexicographical/dictionary order ..
#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void permute(int,char);
void sort(void);
enum flag{true ,false};

char *current ;
char *inputString ;
char cchar=' ';

int index1 =0;
int length ;

int main()
{
     printf("Enter the  string\n");
     inputString=(char *)malloc(50);
     gets(inputString);
     sort(); //sorting chars ..
     while(inputString[index1] != '\0')
     {
                              index1++;
     }
     
     length=index1;
     index1=0;
     //cchar=inputString[0];
     permute(0);
     
     getch();
     return 0;
}

//sorting inputString characters in alphabetical order ..

void sort()
{
     //insertion sort ..
     int i=0;
     char *str;
     str=(char *)malloc(50);
     enum flag status =false ;
     int j=0;
     char temp;
     
     
     while(inputString[i] != '\0')
     {
                             status=false;
                             
                             if(i==0)
                             str[i]=inputString[i];
                             
                             else
                             {
                                 if(inputString[i]>=str[i-1])
                                 str[i]=inputString[i];
                                 
                                 else
                                 {
                                   j=i; 
                                   str[i]=inputString[i]; 
                                   
                                   while(status != true)
                                   {
                                                
                                                if(str[j]<str[j-1] && j>0) //swapping to sort ..
                                                {
                                                   temp=str[j];
                                                   str[j]=str[j-1];
                                                   str[j-1]=temp;
                                                   j--;                
                                                }
                                                else
                                                {
                                                    status=true;
                                                }
                                   }  
                                 }
                                 
                             }
                             i++;
                                
     }
     inputString=str;
     //printf("%s",inputString);
     j=0;
     while(inputString[j] != '\0')
     {
                                putchar(inputString[j]);
                                j++;
     }
}

//permutations and printing ..
void permute(int pos)
{
     int i ;
     if(pos==length-2)
     {
            //////////////////////////////////////////////////////////          current[++currentIndex]=inputString[i];
                      printf("%s",current);
                      currentIndex--;
     }                
     if(pos==0)
     {
     for(i=pos;i<length;i++)
     {
                            current[++currentIndex]=inputString[i];
                            cchar=inputString[i];
                        permute(pos+1);
     }
     }
     else
     {
         for(i=pos;i<length && inputString[i]!=cchar ;i++)
         {
                          cchar=inputString[i];
                        permute(pos+1);  
                        current[++currentIndex]=inputString[i];    
         }
     }
}
