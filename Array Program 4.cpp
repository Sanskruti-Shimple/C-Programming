#include<stdio.h>
main()
{
	int mat [3][3], i, n, j;
	printf("How many rows and columns:- ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &mat[i][j]);
		}
		
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d", mat[j][i]);
		}
		printf("\n");
	}
}
