#include<stdio.h>
#include<conio.h>
#include<dirent.h>
#include<sys/stat.h>


int main()
{
    DIR *directory ;
    int count =0 ;
    char *dirname ;
    directory=opendir("E:\\vedios\\");
    struct dirent *reader ;
    struct stat buf ;
    reader=readdir(directory);
    while((dirname=reader->d_name) != NULL)      
    {              
                                 
                  puts(dirname);       
                  count++;         
    }
    getch();
    return 0 ;
}
