#include<stdio.h>
 
 void main()
{
	int n1,n2,n3,n4;
	printf("Enter Number 1:");
	scanf("%d",&n1);
	printf("Enter Number 2:");
	scanf("%d",&n2);
	printf("Enter Number 3:");
	scanf("%d",&n3);
	printf("Enter Number 4:");
	scanf("%d",&n4);
	
	if(n1>n2 && n2>n3 && n3>n4)
	{
		printf("Number 1 is greater!!");
	}
	else if (n2>n1 && n2>n3 && n2>n4)
	{
		printf("Number 2 is greater!!");
	}
	else if (n3>n2 && n3>n4)
	{
		printf("Number 3 is greater!!");
	}
	else
	{
		printf("Number 4 is greater!!");
	}
	
	
  }  
