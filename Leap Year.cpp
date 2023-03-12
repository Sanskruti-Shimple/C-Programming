#include<stdio.h>
main()
{
	int n;
	printf("Enter any year:- ");
	scanf("%d", &n);
	if (n%400==0)
	{
		printf("Leap Year");
	}
	else if (n%100==0)
	{
		printf("Not leap year");
	}
	else if (n%4==0)
	{
		printf("Leap Year");
	}
	else 
	{
		printf("Not a leap year");
	}
}

