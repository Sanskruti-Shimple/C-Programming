#include<stdio.h>
main()
{
	int a, b, result = 1;
	
	printf("Enter a:- ");
	scanf("%d", &a);
	printf("Enter b:- ");
	scanf("%d", &b);
	
	while(b>0)
	
	{
		
		
		result = result*a;
		b--;
		
		
	}
	
	printf("%d", result);
	
	}
