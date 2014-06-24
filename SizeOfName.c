#include<stdio.h>
#include<conio.h>

int main()
{
    char name[15];
    char *name1 = name ; 
    printf("Enter Name : \t");
    gets(name);
    int j = 0 ;
    //scanf("%s",name);
    int i =0 ;
    int size ;
    while(name[i] != '\0' )
    {
                  i++ ;
    }
    //printf("%s",name);
    //while(*name1 != '\0')
    //{
                printf("%s",name);
                //j++ ;
    //}
    size=sizeof(name);
    printf(" Length of Name is : %d\n",i);
    printf("Size of Array is : %d\n",size);
    getch();
    return 0 ;
}
