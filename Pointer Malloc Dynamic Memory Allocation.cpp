#include<stdio.h>
#include<stdlib.h>

main()
{
	int *ar, i, n;
	
	printf("Enter numbers:- ");
	scanf("%d", &n);
	
	ar = (int*)malloc(sizeof(int)*n); //forms memory i.e 20 bytes as -- int consist of 4 byte
	
	for(i=0; i<n; i++)
	{
		scanf("%d", (ar+i));
	}
	for(i=0; i<n; i++)
	{
		printf("%d", *(ar+i));
	}
}
