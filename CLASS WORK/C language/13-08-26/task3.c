#include<stdio.h>

 void main()
{

    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    
    if(n==0)
    {
    	printf("Neutral");
	}
	else if(n%2==0)
	{
		printf("Even!!");
	 } 
	 else
	 {
	 	printf("Odd!!");
	 }

 } 
