#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("enter the num:-");
	scanf("%d %d %d",&a,&b,&c);
	if(a=b=c)
	{
		printf("all num are same");
	}
	else if(a>b && a>c)
	{
		printf("a is largest");
	}
	else if(b>c)
	{
		
		printf("b is largest");
	}
	else
	{
		printf("c is largest");
	}
	return 0;
}
