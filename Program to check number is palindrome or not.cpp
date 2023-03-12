#include<stdio.h>
main()

{
	int n, r, rev=0, cpy;
	
	printf("Enter n:- ");
	scanf("%d", &n );
	
	while(n>0)
	
	
	{
		
		r = n%10;
		rev = (rev*10)+2;
		n = n/10;
	}
	
	if(rev==cpy)
	
	{
		printf("Palindrome");
	}
	
	else 
	
	{
		printf("Not palindrome");
	}
}
