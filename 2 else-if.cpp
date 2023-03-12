#include<stdio.h>
main()
{
	int a, b, c;
	printf("Enter value of a:- ");
	scanf("%d", &a);
	printf("Enter value of b:- ");
	scanf("%d", &b);
	printf("Enter value of c:- ");
	scanf("%d", &c);
	
	if (a>b && a>c)
	{
		printf("a max");
	}
	else if (b>a && b>c)
	{
		printf("b max");
	}
	else if (c>a && c>b)
	{
		printf("c max");
	}
	else
	{
		printf("No one is max");
	}
}
