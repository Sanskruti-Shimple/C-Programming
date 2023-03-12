#include<stdio.h>

int len(int n)
{

	int len =0;
	while(n>0)
	{
		n=n/10;
		len++;
	}
	return len;
}
int expo(int x, int y)
{
	int ans=1;
	while(y>0)
	{
		ans = ans*x;
		y--;
	}
	return ans;
}

int main()
{
	int n=153, r, cpy, Sm=0;
	cpy = 153;
	int ll = len(n);
	
	while(n>0)
	{
		r = n%10;
		Sm= Sm+expo(r, ll);
		n = n/10;
		
	}
	if(Sm==cpy)
	{
		printf("Armstrong Number");
		
	}
	else 
	{
		printf(" Not an armstrong number");
	}
}
