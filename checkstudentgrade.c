//check studentgrade
#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks:-");
	scanf("%d",&marks);
	if(marks>90 && marks<=100)
	{
		printf("a1 grade");
	}
	else if(marks>80 && marks<=90)
	{
		printf("a2 grade");
	}
	else if(marks>70 && marks<=80)
	{
		printf("b1 grade");
	}
	else if(marks>60 && marks<=70)
	{
		printf("b2 grade");
	}
	else if(marks>50 && marks<=60)
	{
		printf("c grade");
	}
	else if(marks>35 && marks<=50)
	{
		printf("d grade");
	}
	else
	{
		printf("student was fail");
	}
	 return 0;
 
	
}
