#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *inputfile = fopen("hotel.cpp","r");
    FILE *outputfile = fopen("Decrypted_hotel.cpp","w");
    char key[] ={'a','b','c','d','e'};
    int i = 0  ;
    char a ;
    char c= fgetc(inputfile);
    while(c != eof())
    {                       printf("%c",c);
                            a=c^key[i];
                            fputc(a,outputfile);
                            i=(++i<=4 ? i:0); // if i is less than lenght of key than increment i else make it 0 ..
                            c=fgetc(inputfile);          
    }
    fclose(inputfile);
    fclose(outputfile);
    
    inputfile=fopen("Decrypted_hotel.cpp","r");
    c = fgetc(inputfile);
    while(c!=EOF)
    {
                            printf("%c",c);
                            c=fgetc(inputfile);
    }
    fclose(inputfile);
    getch();
    return 0 ;
}
