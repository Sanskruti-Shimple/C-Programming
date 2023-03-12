#include<stdio.h>

 int main()
{
	char ch;
	
	printf("Enter any small case alphabet:- ");
	scanf("%c", &ch);
	
	ch = ch-32;
	printf("%c", ch);
	
	return 0;
}
