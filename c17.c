#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:-");
	scanf("%d",&num);
	if(num==1)
	{
		printf("january");
	}
	else if(num==2)
	{
		printf("february");
	}
	else if(num==3)
	{
		printf("march");
	}
	else if(num==4)
	{
		printf("april");
	}
	else if(num==5)
	{
		printf("may");
	}
	else if(num==6)
	{
		printf("june");
	}                                               
	else
	{
		printf("month not found");
	}
	return 0;
	 
}
