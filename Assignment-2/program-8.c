/*8. Write a program to check whether the given number is even or odd using a bitwise 
operator.*/

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a Number\n");
	scanf("%d",&a);
	b=a&1;
	if (b==1)
	   printf("ODD");
	else
	printf("Even");
	return 0;
}

