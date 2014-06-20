#include<stdio.h>
void main()
{
   FILE  *fp;
   char c;
	int countline =0;
   fp = fopen("tcode1.c","r");
   c = fgetc(fp) ;
   while(c!= EOF)
   {
        //printf("%c",c);
	//putchar(c);
	
	if(c=='\n')
	{
		countline++;
	}
	c = getc(fp);
   }

   printf("Total number of lines are : %d \n",countline);
   fclose(fp);
}
