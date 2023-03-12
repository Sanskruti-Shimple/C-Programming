#include<stdio.h>
void swap (int, int);

int main()
{
	int a, b;
	printf("Enter value of a:- ");
	scanf("%d", &a);
	printf("Enter value of b:- ");
	scanf("%d", &b);
	
	swap(a,b);
	return 0;
}

void swap(int x, int y)
{
	int temp;
	
	temp = x; 
	x=y;
	y=temp;
	
	printf("a= %d and b=%d", x, y);
	
}
