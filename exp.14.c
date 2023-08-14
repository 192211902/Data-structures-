#include<stdio.h>
int main()
{
	int n;
	unsigned long long factorial=1;
	printf("enter the positive integer:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("factorial is not defined for negative numbers:\n");
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			factorial *=i;
		}
		printf("factorial of %d is%11u\n",factorial);
	}
	return 0;
}
