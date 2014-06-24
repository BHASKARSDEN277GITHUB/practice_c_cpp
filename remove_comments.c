#include<stdio.h>
#include<conio.h>


int main()
{
    FILE *fp , *fp1 ;
    fp = fopen("deleting_odd.c","r"); 
    fp1=fopen("deleting_odd_wothout_comments.c","w");
    char ch = fgetc(fp) ;
    char chcopy ;
    int i =0  ;
    char percentage='%';
    while(1)
    {               
                    if(i<=90)
                    {printf("Process Completed %d ",i);
                    printf("%c \n",percentage);
                    i++;
                    }
                    
                    if(ch==EOF)
                    {
                                break ;
                                printf("\nEOF\n");
                    } 
                            
                    if(ch=='/' )
                    {                        
                                         chcopy=ch;             
                                                                           
                                         ch=fgetc(fp);
                                         if(ch==EOF)
                                         {
                                                    break ;
                                         }
                                         if(ch=='/')
                                         {
                                         while(ch != '\n')
                                         {
                                                         //do not do any fuckin write operation .. just increment the file pointer using fgetc()
                                                        ch= fgetc(fp);
                                                        if(ch==EOF)
                                                        {break; }
                                                        else
                                                        continue ;
                                         }
                                         }
                                         
                                         else
                                         {
                                             fputc(chcopy,fp1);
                                             fputc(ch,fp1);
                                             ch=fgetc(fp);
                                         }
                                     
                                     
                    }
                    else
                    {
                        fputc(ch,fp1);
                       // printf("Copied char ");
                        ch=fgetc(fp);
                    }
                    
                   //system("cls"); 
    }   
    
    
    fclose(fp) ;
    fclose(fp1);
    system("cls");
    
    printf("Process Completed 100");
    printf("%c \n",percentage);
    printf("\nDone\nAll comments Removed \n");
    
    getch();
    return 0 ;
}
