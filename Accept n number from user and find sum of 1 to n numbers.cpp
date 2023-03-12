#include<stdio.h>
main()
{
	int n, r, sum;
	
	printf("Enter n:- ");
	scanf("%d", &n);
	
	while(n>0)
	
	{
		r = n%10;
		sum = sum + r;
		n =n/10;
		
		printf("%d", sum);
		
	}
}
