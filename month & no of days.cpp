#include<stdio.h>
int main()
{
	int m;
	
	printf("Enter month no:- ");
	scanf("%d", &m);
	
	if (m==2)
	{
		printf("Month has 28 days");
	}
	else if(m==4||m==6||m==9||m==11)
	{
		printf("Month has 30 days");
	}
	else if(m==1||m==3||m==5||m==7||m==8||m==10||m==11)
	{
		printf("Month has 31 days");
	}
	else 
	{
		printf("Invalid Input");
	}
}
