#include<stdio.h>

void main()
{
	int n,i,prime=0;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			prime++;
		}
	}
	if(prime==2)
	{
		printf("prime!!");
	}
	else
	{
		printf("not a prime!!");
	}
	
	
	
}
