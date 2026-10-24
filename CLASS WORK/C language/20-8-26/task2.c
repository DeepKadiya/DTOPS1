#include<stdio.h>

void main()
{
	int n,i,ev=0,od=0,evsum=0,odsum=0,sum=0;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter number:");
		scanf("%d",&n);
		
		if(n%2==0)
		{
			printf("even!!\n");
			ev++;
			evsum=evsum+n;
			
		}
		else
		{
			printf("odd!!\n");
			od++;
			odsum=odsum+n;
		}
		sum=sum+n;
		
	}
	printf("\neven count is : %d",ev);
	printf("\nodd count is: %d",od);
	printf("\neven sum is: %d",evsum);
	printf("\nodd sum is: %d",odsum);
	printf("\nsum is: %d",sum);
	
	
	
}
