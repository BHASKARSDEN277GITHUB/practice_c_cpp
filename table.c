#include<stdio.h>
#include<conio.h>
float table(float c);
main()
{
      float tow ; 
      printf("Enter number for printing its table\n");
      scanf("%f",&tow);
      table(tow);
      printf("Press 'any key' to terminate PROGRAM\n");
      getch();
      return 0;
}
float table(float c)
{
  float i ; float p ;
    for(i=1;i<=10;i++)
    {
    printf("%f\t*\t%f\t=\t%f\n",c,i,p=c*i);
    }
}
