//pointer

#include<stdio.h>
int main()
{
	int a=10;
	int *ptr=&a;
	printf("%d",a);
	printf("%p",a);
	printf("%p",ptr);
	printf("%d",*ptr);
}
