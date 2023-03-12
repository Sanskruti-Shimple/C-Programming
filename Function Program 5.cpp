#include<stdio.h>
int fun(int n)
{
	int len=0;
	
	while(n>0)
	{
		n=n/10;
		len++;
	}
	return len;
}

int main()
{
	int s, t;
	printf("Enter s:- ");
	scanf("%d", &s);
	t = fun(s);
	printf("Length = %d", t);
	
	return 0;



}

