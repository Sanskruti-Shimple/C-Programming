#include<stdio.h>
int main()
{
	int ar[6], n, i;
	
	printf("How many elements:-");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter data:- ");
		scanf("%d", &ar[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d", ar[i]);
	}
}
