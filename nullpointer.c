//null pointer:- a pointer that is not assignrd any value but Null is known as null pointer
#include<stdio.h>
int main()
{
	int *ptr =NULL;
	if(ptr!=NULL)
	{
		printf("value of ptr is:%d",*ptr);
		
	}
	else
	{
		printf("null pointer");
	}
	return 0;
}
