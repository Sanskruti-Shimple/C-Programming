#include<stdio.h>
main()
{
	int cnt=0, len, i;
	char nm[10], ch; 
	printf("Enter nm:- ");
	scanf("%s", &nm);
	printf("Which Char:- ");
	scanf("%c", &ch);
	
	for(i=0; len=0; nm[i]!='/0'; i++; len++);
	
	for(i=0; i<len; i++)
	{
		if(nm[i]==ch)
		{
			cnt++;
		}
		printf("Char:- ", &ch);
	}
}
