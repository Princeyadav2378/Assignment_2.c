#include<stdio.h>
int main()
{
	int a,b,count=0;
	printf("Enter a Number\n");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a&1;
		count++;
		if(b==1)
	{
			
		printf("%d",count);
		break;
    }
			a=a>>1;
	}return 0;
}
