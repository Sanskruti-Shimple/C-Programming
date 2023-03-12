#include<stdio.h>
int main()
{
	int i, j, k, l, n=4;
	
	{
		
		for(i=1; i<=n; i++)
		
		{
			for(j=1; j<=n; j++)
			
			{
				printf("*");
			}
			
			for(k=1; k<=n; k++)
			
			{
				printf(" ");
			}
		}
		for(l=1; l<=n; l++)
		
		{
			printf("\n");
		}
	}
}
