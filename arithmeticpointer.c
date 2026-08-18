//pointer arithmetic
#include<stdio.h>
int main()
{
	int a=10, b=20,c;
	int *p,*q;
	p=&a;
	q=&b;
	c=*p+*q;
	printf("addition: %d",c);
	return 0;
}
