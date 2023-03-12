#include<stdio.h>

void fun(int n)
{
	int sum = 0, r;
	
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
		
	}
	
	printf("digit sum = %d", sum);
	
	
}

int main() 
{
	int m; 
	printf("Enter m:- ");
	scanf("%d", &m);
	fun(m);
	
	return 0;
}
