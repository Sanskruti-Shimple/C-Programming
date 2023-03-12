#include<stdio.h>
main()
{
	int a, p, n = 3; *p;
	
	p=&a;
	
	printf("%d", a) ; //value of a
	
	printf("%d", &a); //address of a
	
	printf("%d", p); //address of a 
	
	printf("%d", *p); //value of a
	
}
