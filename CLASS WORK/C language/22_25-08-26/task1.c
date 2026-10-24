#include<stdio.h>

void main()
{
	int n,rev=0,rem=0;
	
	printf("Enter numbert: ");
	scanf("%d",&n);
	int n1=n;
	
	while(n!=0)  //!=not equal fun.	
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		
	}
	if(n1=rev)
	{
		printf("palondrome");
	}
	else
	{
		printf("it not palondrome");
	}
	printf("\nrev num. is: %d",rev);
	
}
