#include<stdio.h>

void fun(int x, int y)
{
int z; 
z= x+y;
printf("%d", z);
}
main()
{
	int a, b; 
	printf("Enter a:- ");
	scanf("%d", &a);
	printf("Enter b:- ");
	scanf("%d", &b);
	fun(a,b);
	return 0;
}
