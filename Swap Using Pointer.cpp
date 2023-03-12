#include<stdio.h>

void swap (int *x, int *y)

{
	*x = *x+*y;
	*y = *x-*y;
	*x = *x-*y;
}

main()
{
	int a = 4, b=3;
	
	printf("Before Swap a= %d\t, b=%d\t", a, b);
	
	swap(&a , &b);
	
	printf("After Swap a=%d\t, b=%d\t", a,b);
}
