#include<stdio.h>
int main()
{
	int a, b;
	
	printf("Enter value of a \n");
	scanf("%d", &a);
	
	printf("Enter value of b \n");
	scanf("%d", &b);
	
	while(a!=b)
	{
		if (a>b)
		{
			a= a-b;
			
		}
		else
		{
			
			b= b-a;
		}
	}
	printf("Gcd == %d", a);
	return 0;
}
