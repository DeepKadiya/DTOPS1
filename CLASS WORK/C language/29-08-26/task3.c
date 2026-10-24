#include<stdio.h>

void factorial_no(int n1) // Defined
{
	int i,fac=1;
for(i=1;i<=n1;i++)
	{
		fac=fac*i;
	}
	printf("\nfac number is: %d",fac);
	
}
void prime_no(int n2)
{
	int i,pri=0;
	for(i=1;i<=n2;i++)
	{
		if(n2%i==0)
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
void reverse_no(int n3)
{
	int rem=0,rev=0;
	int n11=n3;
	
	while(n3!=0)
	{
		rem=n3%10;
		rev=rev*10+rem;
		n3=n3%10;
	}
	if(n11==rev)
	{
		printf("\npalondrome");
	}
	else
	{
		printf("\nnot palondrome");
	}
	printf("\nrev number is: %d",rev);
}
void main()
{
	while(1)
	{
		int choice;
		printf("\nEnter number 1: fac no");
		printf("\nEnter number 2: prime no");
		printf("\nEnter number 3: rev no");
		printf("\nEnter number 4: exit");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			factorial_no(5);
		}
		else if(choice==2)
		{
			prime_no(23);
		}
		else if(choice==3)
		{
			reverse_no(12);
		}
		else if(choice==4)
		{
			printf("\nThank You!!");
			break;
		}
		else
		{
			printf("\nInvalid choice enter correct value");
			break;
		}
		
		
	}
	
	
	
}

















