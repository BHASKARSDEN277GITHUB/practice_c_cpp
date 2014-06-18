#include<stdio.h>
int main()
{
FILE *file_pointer ;
file_pointer = fopen("malloc.c","rb"); //fopen takes two arguments , 1. file name 2. mode ...........
char buffer[1024];
fread(&buffer,sizeof(buffer),1,file_pointer);
printf("%s",buffer);
fclose(file_pointer);
FILE *file_pointer2 ;
file_pointer2 = fopen("copymalloc.txt","wb");
fwrite(&buffer,sizeof(buffer),1,file_pointer2);
fclose(file_pointer2);
return 0;
}
