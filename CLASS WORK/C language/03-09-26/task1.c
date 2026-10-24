#include<stdio.h>

void main()
{
	int a[5];
	int i,sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("Enter number :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nnumber is: %d",a[i]);
		sum=sum+a[i];
	}
	printf("\nsum is: %d",sum);
	
	
}
