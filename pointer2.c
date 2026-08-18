//pointer
#include<stdio.h>
int main()
{
	int a=10;
	float b=20;
	float *ptr;
	ptr=&b;
	printf("%f",*ptr);
	return 0;
}
