//problem to calculate no od e's in given array of character pointers ..

#include<stdio.h>
#include<conio.h>

main()
{
      char * s[] = {"we will teach you how to " ,"Move a mountain " ,"Level a building " ,"Erase the past ","Make a million " };
      int size = 5 ;
      int i =0,j=0;
      char e = 'e';
      int count=0 ;
      while(i<5)
      {
                j=0;
                while(s[i][j]!='\0')
                {
                            if(s[i][j]==e)
                            {
                                          count++;
                            }
                            j++;
                }
                i++;
                
      }
      
      printf("%d",count);
      getch();
}
