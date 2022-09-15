
/*9. Write a program to print size of an int, a float, a char and a double type variable*/
#include<stdio.h>
int main()
{
	int a;
	char c;
	float  k;
	double lf;
	a=sizeof(a);
	c=sizeof(c);
    k=sizeof(k);
    lf=sizeof(lf);
    printf("%d\n%c\n%f\n%lf",a,c,k,lf);
    return 0;
}

