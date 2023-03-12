#include<stdio.h>
main()
{
	int a, b, c, d;
	printf("Enter Your Biology Marks: ");
	scanf("%d", &a);
	printf("Enter Your Physics Marks: ");
	scanf("%d", &b);
	printf("Enter Your Chemistry Marks: ");
	scanf("%d", &c);
	printf("Enter Your Maths Marks: ");
	scanf("%d", &d);
	
	int Total;
	Total = a+b+c+d;
	printf("Total Marks: %d ", a+b+c+d);
	
    float Percentage;
	Percentage = (float)Total/400*100.0;
	printf("Percentage = %f", Percentage);
	
	return 0;
	
}
