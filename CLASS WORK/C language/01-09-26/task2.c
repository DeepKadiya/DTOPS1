#include<stdio.h>

int greatest_no(int n1,int n2,int n3)
{
	if(n1>n2 && n1>n3)
	{
		return n1;
	}
	else if(n2>n1 && n2>n3)
	{
		return n2;
	}
	else
	{
		return n3;
	}
}
int main()
{
	int n1,n2,n3;
	printf("Enter number 1:");
	scanf("%d",&n1);
	printf("Enter number 2:");
	scanf("%d",&n2);
	printf("Enter number 3:");
	scanf("%d",&n3);
	printf("%d",greatest_no(n1,n2,n3));
}
