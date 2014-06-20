#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fp ;
    int chars=0 , lines=0 , words = 0 ;
    fp = fopen("cv_shivam_gupta.txt","r") ;
    if(fp==NULL)
    {
                printf("File does not exist \n");
                exit(0);
    }
    while(1)
    {               
                  if(fgetc(fp)==EOF)
                  break ;
                  
                  chars++ ;
                  
                  if(fgetc(fp) ==' ')
                  words++ ;
                  if(fgetc(fp)=='\n')
                  lines++ ;
                  
    }
    printf("chars = %d , words = %d , lines = %d \n",chars , words , lines) ;
    
    getch();
    return 0 ;
}
