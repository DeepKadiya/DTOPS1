#include<stdio.h>

int greatest_no()
{
	int n1=60,n2=299,n3=23;
	
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
	printf("%d",greatest_no());
}
