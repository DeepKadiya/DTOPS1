#include<stdio.h>

 void main()          //swapping the values
{
	
	int a,b,temp;
	printf("Enter Number A:");
	scanf("%d",&a);
	printf("Enter Number B:");
	scanf("%d",&b);
	
	    temp=a;
	    a=b;
	    b=temp;
	printf("Value of A: %d",a);
	printf("\nValue of B: %d",b);    
	
	
	
 } 
