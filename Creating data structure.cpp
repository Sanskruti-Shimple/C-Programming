#include<stdio.h>
struct stud 
{
	int r,p,c,m,tot;
	float per;
	char gd; 
};

main()
{
	struct stud s;
	
	printf("Enter Roll No:- ");
	scanf("%d", &s.r);
	
	printf("Enter Physics Marks:- ");
	scanf("%d", &s.p);
	
	printf("Enter Chemistry Marks:- ");
	scanf("%d", &s.c);
	
	printf("Enter Maths Marks:- ");
	scanf("%d", &s.m);
	
	s.tot = s.p + s.c + s.m;
	s.per = (float)s.tot/3;
	
	if(s.per>=75)
	{
		s.gd = 'A';
	}
	else if(s.per>=60)
	{
		s.gd = 'B';
	}
	else if(s.per>=50)
	{
		s.gd = 'C';
	}
	else 
	{
		s.gd = 'D';
	}
	
	printf("%d %d %d %d %d %f %c", s.r, s.p, s.c, s.m, s.tot, s.per, s.gd);
}
