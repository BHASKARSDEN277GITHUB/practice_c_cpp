#include<stdio.h>
#include<conio.h>
int main()
{
    float a=3.14;
    char *j;
    j = (char*)&a;
    printf("%d\n", *j);
    getch();
    return 0;
}
