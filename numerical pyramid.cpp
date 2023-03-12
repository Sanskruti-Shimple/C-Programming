#include<stdio.h>

int main()
{
	int i, j, n=3, cnt=0;
	
	for(i=n; i>0; i++)
	
	{
		for(j=n; j>0; j++)
		
		{
			printf("%d", cnt);
			cnt++;
		}
		
		printf("\n");
	}
}
