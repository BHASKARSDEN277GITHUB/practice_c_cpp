#include<sNtdio.h>
#include<conio.h>

int main()
{
    printf("Enter number of lines you want to type \n");
    int n ;
    int i , j =0;
    scanf("%d",&n);
    char stringArray[n][30];
    for(i=0;i<n;i++)
    {
                    scanf("%s",stringArray[i]);
    }   
    printf("%c   %c \n",stringArray[0],stringArray[2][0]);
    //say you want the lines with word "the"
    for(i=0;i<n;i++)
    {
               while(stringArray[i][j] != '\0')
               {
                                    if(stringArray[i][j]=='t' && stringArray[i][j+1]=='h' && stringArray[i][j+2]=='e')
                                    {
                                                              printf("%s\n",stringArray[i]);
                                                              break ;
                                    }
                                    j++;
               }
    }
    
    getch() ;
    return 0 ;
}
