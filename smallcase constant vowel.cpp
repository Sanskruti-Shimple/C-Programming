#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter any alphabet:- ");
	scanf("%c", &ch);
	
	if(ch>='a' && ch<='z')
	{
		if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			printf("Entered alphabet is a vowel");
		}
		else
		{
			printf("Entered alphabet is a consonant");
		}
		else
		{
			printf("Invalid Input");
		}
	}
	
