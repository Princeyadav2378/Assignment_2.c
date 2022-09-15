//2. Write a program to print a given number without its last digit.


#include<stdio.h>
int main()
{
	int x;
	printf("Enter a Number\n");
	scanf("%d",&x);
	x=x/10;
	printf("Unit digit is %d",x);
	return 0;
}
