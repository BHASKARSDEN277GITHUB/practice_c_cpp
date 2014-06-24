#include<stdio.h>
#include<conio.h>
main()
{
char str[80];
int i,delt=32;
printf("Enter a string less than 80 characters:\n");
gets(str);
i=0;
while(str[i])
{
if ((str[i]>='a')&&(str[i]<='z'))
str[i]-=32;
++i;
}
printf("The entered string is (in uppercase):\n");
puts(str);
getch();
return 0;
}
