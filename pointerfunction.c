//pointer function
#include<stdio.h>
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
	
}
int main()
{
	int a,b;
	int (*p) (int,int);
	int result;
	printf("enter a and b:-");
	scanf("%d%d",&a,&b);
	p=add;
	result=(*p)(a,b);
	printf("addition:-%d",result);
	return 0;
}
