#include<stdio.h>
main() 
{
	int ar[6], i, n;
	printf("How many elements:- ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter data:- ");
		scanf("%d", &ar[i]);
		
	}
	
	for(i=(n-1); i>=0; i--)
	{
		printf("%d", ar[i]);
	}
}
