#include<stdio.h>
int main()
{
	int ar[6], n, i, max;
	printf("How many elements:- ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	
	{
		printf("Enter data:- ");
		scanf("%d", &ar[6]);
	}
	max = ar[0];
	
	for(i=1; i<n; i++)
	
	{
		if(max<ar[i])
		{
			(max=ar[i])
			
		}
	}
}
