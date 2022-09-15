//5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
	int a;
	int sum=0,rem=0;
	printf("Enter a Number\n");
	scanf("%d",&a);
	rem=a%10;
	a=a/10;
	sum=sum+rem;
	
    rem=a%10;
	a=a/10;
	sum=sum+rem;
	
	rem=a%10;
	a=a/10;
	sum=sum+rem;
	printf("sum of three digit is %d",sum);
	return 0;
}
