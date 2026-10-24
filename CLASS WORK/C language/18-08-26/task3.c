#include<stdio.h>

void main()
{
	
	int i=1,ev=0,od=0,evsum=0,odsum=0,sum=0;
	int n;
	
	while(i<=5)
	{
		printf("enter number:");
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
		i++;
		}	
		printf("\neven count: %d",ev);
		printf("\nodd count: %d",od);
		printf("\neven sum: %d",evsum);
		printf("\nodd sum: %d",odsum);
		printf("\nsum: %d",sum);
	
	
}
