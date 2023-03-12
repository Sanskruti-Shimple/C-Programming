#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("enter side a:");
	scanf("%d", &a);
	
	printf("enter side b:");
	scanf("%d", &b);
	
	printf("enter side c:");
	scanf("%d", &c);
	
	if((a+b)>c)
	{
		if((a+c)>b)
		{
			if((b+c)>a)
			{
				printf("triangle is valid");
			}
			else 
			{
				printf("triangle is invalid 1");
			}
		}
		else 
		{
			printf("triangle is invalid 2");
		}
	}
	else
	{
		printf("triangle is invalid 3");
	}
	return 0;
}

