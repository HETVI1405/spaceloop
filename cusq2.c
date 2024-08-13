#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z,k,l,m;
	
	for(x=5;x>=1;x--)
	{
		for(y=1;y<=x;y++)
		{
			printf("%d",y);
		}
		for(z=x;z<=4;z++)
		{
			printf(" ");
		}
			for(l=x;l<=4;l++)
		{
			printf(" ");
		}
		
		for(k=x;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	 
	 for(x=1;x<=5;x++)
	 {
	 	for(y=1;y<=x;y++)
	 	{
	 		printf("%d",y);
		 }
		for(k=x;k<=4;k++)
		{
		    printf(" ");	
		}  
		for(l=x;l<=4;l++)
		{
			printf(" ");
		}
		for(m=x;m>=1;m--)
		{
			printf("%d",m);
		}
		printf("\n");
	 }
	
	
}
