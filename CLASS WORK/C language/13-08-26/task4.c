#include<stdio.h>

 void main()      //nested if/else
{
	
	int n1,n2,n3;
	printf("Enter Number 1:");
	scanf("%d",&n1);
	printf("Enter Number 2:");
	scanf("%d",&n2);
	printf("Enter Number 3:");
	scanf("%d",&n3);
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("Number 1 is greater!!");
		}
		else
		{
			printf("Number 3 is greater!!");
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("Number 2 is greater!!");
		}
		else
		{
			printf("Number 3 is greater!!");
		}
	}
	
	
 } 
