/*13. Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right*/
int main()
{
	int a,q,r;
	printf("Enter two Number");
	scanf("%d",&a);
	q=a/10;
	r=a%10;
	a=r*100+q;
	printf("%d",a);
	return 0;	
}

