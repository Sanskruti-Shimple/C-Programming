#include<stdio.h>
main()
{
	char ch; 
	printf("Enter ch:- ");
	scanf("%c", &ch);
	
	if(ch>=97 && ch<=122)
	{
		ch = ch-32;
		
	}
	printf("%c", ch);
}
