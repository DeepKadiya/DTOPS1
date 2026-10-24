#include<stdio.h>

void main()
{
	while(1)
	{
		int choice;
		
		printf("\nEnter number 1: fac no.");
		printf("\nEnter number 2: prime no.");
		printf("\nEnter number 3: rev no.");
		printf("\nEnter number 4: exit");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			int n,i,fac;
			printf("\nEnter number:");
			scanf("%d",&n);
			
			for(i=1;i<=n;i++)
			{
				fac=fac*i;
			}
			printf("\nfac number is: %d",fac);
		}
		else if(choice==2)
		{
			int n,i,prime=0;
			printf("\nEnter number:");
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
				printf("not prime!!");
			}
		}
		else if(choice==3)
		{
			int n,rem=0,rev=0;
			printf("\nEnter number:");
			scanf("%d",&n);
			int n1=n;
			
			if(n!=0)
			{
				rem=n%10;
				rev=rev*10+rem;
				n=n%10;
			}
			if(n1==rev)
			{
				printf("\npalondrome");
			}
			else
			{
				printf("\nnot palondrome");
			}
			printf("\nrev number is: %d",rev);
		}
		else
		{
			printf("\nThank You");
			break;
		}
	}
	
	
	
	
}
