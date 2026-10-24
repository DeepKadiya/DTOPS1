#include<stdio.h>

void fact_no(int n)
{
	int i,fac=1;
	
	for(i=1;i<=n;i++)
	{
       fac=fac*i;
	}
	printf("\nfac no is: %d",fac);
}

void main()
{
	fact_no(5);
}
