#include<stdio.h>
main()
{
	int i, j, k, n=3;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=(n-1); j++)
		{
		
		printf(" ");
	    }
		for(k=1; k<=i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
