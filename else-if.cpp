#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a & b:- ");
	scanf("%d %d", &a, &b);
	
	
	if (a>b)
	{
		printf("a max");
	}
	else if (b>a)
	{
		printf("b max");
	}
	else 
	{
		printf("Both are same");
	}
}
