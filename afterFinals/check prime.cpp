#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    
    int n ;
    int root ;
    int flag=0 ;
    scanf("%d",&n);
    root = (int)sqrt(n);
    printf("root is %d \n",root);
    for(int i=2;i<=root;i++)   //checking for all integers less than or equal to square root of given number ..
    {
            if(n%i == 0)
            {
                   flag++;
                   
            }
    }
    if(flag==0)
    {
               printf("Number is  prime \n");
    }
    else
    {
        printf("Number is  not prime \n");
    }

    getch();
    return 0 ;
}
