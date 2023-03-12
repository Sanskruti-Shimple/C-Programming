#include<stdio.h>
int func(int number)
{
int num = 0;
int power = 0;
int sum = 0;
int n = number;
while(n!=0)
{
num = n % 10;
power = num*num*num;
sum += power;
n /= 10;
}
if(sum == number) return 0;
else return 1;
}
int main()
{
int number;
printf("Enter The Number");
scanf("%d",&number);
if(func(number) == 0)
printf("%d is Armstrong Number\n", number);
else
printf("%d is Not Armstrong Number", number);
return 0;
}
