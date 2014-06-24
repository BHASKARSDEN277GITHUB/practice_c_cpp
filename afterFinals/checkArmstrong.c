#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
          int  Anum  , digitArray[10], countDigits=0 ;
          int i , checksum ,AnumCopy;
          int check ;
          scanf("%d",&Anum);
          AnumCopy=Anum ;
          while(Anum !=0)
          {
                     digitArray[countDigits]=Anum%10 ;
                     Anum=Anum/10 ;
                     countDigits++;
          }
         // printf("%d\n",digitArray[2]);
          checksum=0;
          for(i=0;i<countDigits;i++)
          {                         
                                    //check =pow(digitArray[i],countDigits);
                                     //printf("%d\n",check);
                                    checksum = checksum+pow(digitArray[i],countDigits);  //summiotin of the cube values of each digit ..
                                    //printf("%d\n",checksum);
                                    
          }
          printf("%d\n",checksum);
          if(checksum==AnumCopy)
          printf("Armstrong Number\n") ;
          else
          printf("NOt an Armstrong Number\n");
          getch() ;
          return 0 ;
}
