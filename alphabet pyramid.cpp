#include<stdio.h>

int main()
{
	int i, j, n=3, cnt=97;
	
	for(i=n; i>0; i--)
	
	{
		for(j=1; j<=i; j++)
		
		{
			printf("%c", cnt);
			cnt++;
		}
		
		printf("\n");
	}
}
