#include<stdio.h>

void display(int*brr, int n)

{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d\t", brr[i]);
	}
}
int main()
{
	int arr[5], i, n;
	printf("Enter no:- ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter Data:- ");
		scanf("%d", &arr[i]);
	}
	display(arr, n);
	
	return 0;
}
