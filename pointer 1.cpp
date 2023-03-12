#include<stdio.h>
main()
{
	int a= 3; *p;
	p=&a;
	printf("%d", a);
	printf("%d", &a);
	printf("%d", p);
	printf("%d", *p);
}
