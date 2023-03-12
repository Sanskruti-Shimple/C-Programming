#include<stdio.h>

int main()

{
	
	int a, b, x, y, lcm;
	
	printf("Enter a:- ");
	scanf("%d", &a);
	
	printf("Enter b:- ");
	scanf("%d", &b);
	
	x = a;
	y = b;
	
	while(a!=b)
	
	{
		if(a>b)
		{
			a = a-b;
		}
		else
		{
			b = b-a;
		}
	}
	
	printf("Gcd == %d", a);
	lcm = (x*y)/a;
	printf("LCM = %d", lcm);
	
}
