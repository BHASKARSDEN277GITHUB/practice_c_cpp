#include<stdio.h>

int main()
{	
	int i=0 ;
	int cout1=0,cout2=0,cout3=0;
	int z=0;
	int j =0 ,k=0;
	FILE *fread ;
	fread = fopen("values.txt","rb"); 
	char c ;
	char a[100] , b[100] ,d[100];
	c=getc(fread);
	while(c!=EOF) 
	{
	if(c=='a')
	{
		while(c!='\n')
		{
		
			a[i]=c;
			i++;
			c=getc(fread);
			cout1++;
		}
	}
	if(c=='b')
	{
		while(c!='\n')
		{
		
			b[j]=c;
			j++;
			c=getc(fread);
			cout2++;
		}
	}
	if(c=='c')
	{
		while(c!='\n')
		{
		
			d[k]=c;
			k++;
			c=getc(fread);
			cout3++;
		}
	}
	c=getc(fread);
	}
	

	printf("TORQUE = ");
	for(z=1;z<=cout1;z++)
	{
		printf("%c",a[z]);
	}
	printf("\n");
	z=0;
	printf("TORQUE = ");
	for(z=1;z<=cout2;z++)
	{
		printf("%c",b[z]);
	}
	printf("\n");
	z=0;
	printf("TORQUE = ");
	for(z=1;z<=cout3;z++)
	{
		printf("%c",d[z]);
	}
	printf("\n");
	fclose(fread); 
	return 0; 
}
