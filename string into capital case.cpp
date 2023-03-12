#include<stdio.h>
main()
{
	int i, n=0;
	char nm[i];
	
	printf("Enter Name:- ");
	scanf("%s", &nm);
	
	for(i=0; nm[i]!='\0'; i++)
	{
		if(nm[i]>='97'&& nm[i]-122)
		{
			nm[i]=nm[i]-32;
		}
		printf("%c", nm[i]);
	}
}
