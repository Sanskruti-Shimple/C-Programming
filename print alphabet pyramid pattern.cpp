#include<stdio.h>

int main()
{
	int i, j, n=5, cnt=97;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		
		{
			if(i==j)
			{
				printf("%c", cnt);
				cnt++;
			}
			else
			{
				printf(" ");
			}
			
			printf("\n");
		}
	}
}
