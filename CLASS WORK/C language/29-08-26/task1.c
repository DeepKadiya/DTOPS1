#include<stdio.h>

void factorial_no() // Defined
{
	int n,i,fac=1;
	printf("\nEnter number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("\nfac number is: %d",fac);
	
}
void prime_no()
{
	int n,i,pri=0;
	printf("\nEnter number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			pri++;
		}
	}
	if(pri==2)
	{
		printf("\nprime number!!");
	}
	else
	{
		printf("\nnot prime!!");
	}
}
void main()
{
	factorial_no();  //call
	prime_no();
}
	

	
	
	
	

