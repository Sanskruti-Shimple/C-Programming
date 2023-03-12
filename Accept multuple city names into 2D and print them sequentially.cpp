#include<stdio.h>
main()
{
	int n=3, i; 
	char nm[10], city[5][9];
	
	printf("Enter number of cities you want to print:- ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%s", nm);
	}
	for(i=n; i<n; i++)
	{
		printf("\t%s", nm[i]);
	}
}
