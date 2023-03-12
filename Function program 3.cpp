#include<stdio.h>

int fun(int x, int y)
{
	int z;
	z= x+y;
	return z;
	
}

int main()
{
	int a, b, c;
	printf("Enter a:- ");
	scanf("%d", &a);
	printf("Enter b:- ");
	scanf("%d", &b);
	
	c=fun(a,b);
	printf("ans=%d", c);
	return 0;
}
