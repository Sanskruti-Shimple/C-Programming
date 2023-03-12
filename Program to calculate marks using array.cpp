#include<stdio.h>
struct stud 
{
	int r, p, c, m, tot;
	float per;
	char gd;
	
};

main()
{
	struct stud s[5];
	int i,n;
	
	printf("Enter No Of Elements:- ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter Roll No:- ");
		scanf("%d", &s[i].r);
		
		printf("Enter Physics Marks:- ");
		scanf("%d", &s[i].p);
		
		printf("Enter Chemistry Marks:- ");
		scanf("%d", &s[i].c);
		
		printf("Enter Maths Marks:- ");
		scanf("%d", &s[i].m);
		
		s[i].tot = s[i].p + s[i].c + s[i].m;
		
		s[i].per = (float)s[i].tot/3;
		
		if(s[i].per>=75)
		{
			s[i].gd = 'A';
		}
		else if(s[i].per>=60)
		{
			s[i].gd = 'B';
		}
		else if(s[i].per>=50)
		{
			s[i].gd = 'C';
		}
		else 
		{
			s[i].gd = 'D';
		}
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d %d %d %d %d %f %c", s[i].r, s[i].p, s[i].c, s[i].m, s[i].tot,s[i].per,s[i].gd);
	}
}
