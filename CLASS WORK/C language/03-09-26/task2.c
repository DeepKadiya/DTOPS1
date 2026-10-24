#include<stdio.h>

int main()   //sorting accending,decending
{
	int a[5],i,j,temp;
	for(i=0;i<5;i++)
	{
		printf("Enter number: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("array acc. order: %d\n",a[i]);
	}
	
}
