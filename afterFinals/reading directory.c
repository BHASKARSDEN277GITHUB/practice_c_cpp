#include<stdio.h>
#include<conio.h>
#include<dirent.h>
#include<stdlib.h>
#include<sys/stat.h>


int main()
{
    struct dirent *entry ;
    struct stat buf ;
    DIR *currentDirectory ;
    int count=0,status=0;
    char *del ;
    
    char *filename="unix notes";
    char *currentPath="E:\\";
    currentDirectory=opendir(currentPath);
    remove("E:\\VID_20140221_143603.3gp");
    getch();
    
    return 0;
}
