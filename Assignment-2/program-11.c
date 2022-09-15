/*11. Write a program to input a number from the user and also input a digit. Append a 
digit in the number and print the resulting number. (Example - number=234 and 
digit=9 then the resulting number is 2349)
*/
int main()
{
	int a,n;
	printf("Enter two Number");
	scanf("%d%d",&a,&n);
	a=a*10;
	a=a+n;
	printf("%d",a);
	 return 0;	
}
