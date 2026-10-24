#include<stdio.h>

void main()
{
	int n,i,fac=1;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("\nfac number: %d",fac);
	
	
	
}

