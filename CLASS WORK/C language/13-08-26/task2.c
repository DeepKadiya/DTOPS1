#include<stdio.h>
 
 void main()
{
	
	int age;
	printf("Enter age:");
	scanf("%d",&age);
	
	if(age>100)
	{
		printf("Invalid age");
	}
	else if(age>=18)
	{
		printf("Valid age");
	}
	else
	{
		printf("not a valid age");
	}
	
	
 } 
