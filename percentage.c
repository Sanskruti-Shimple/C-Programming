#include<stdio.h>
main()
{
	int roll,phy,chem,math,bio,tot;
	float per;
	
	printf("Enter Your Roll : ");
	scanf("%d", &roll);
	printf("Enter Your Physics Marks: ");
	scanf("%d", &phy);
	printf("Enter Your Chemistry Marks: ");
	scanf("%d", &chem);
	printf("Enter Your Maths Marks: ");
	scanf("%d", &math);
	printf("Enter Your Biology Marks: ");
	scanf("%d", &bio);
	
	
	tot = phy+chem+math+bio;
	
	per = (float)tot/4;
//    printf("Percentage = %f", per);

	printf("\n%d\t%d\t%d\t%d\t%d\t%d\t%.2f\t",roll,phy,chem,math,bio,tot,per);
	
	return 0;
	
}
