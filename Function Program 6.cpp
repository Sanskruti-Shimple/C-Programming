#include<stdio.h>

int gcd(int a, int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}            
		else
		{
			b=b-a;
		}
	}
	return a;
}
int main()
{
	int s, t, u;
	printf("Enter s:- ");
	scanf("%d", &s);
	printf("Enter t:- ");
	scanf("%d", &t);
	u=gcd(s,t);
	printf("SUM=%d",u);
	return 0;
	
}

