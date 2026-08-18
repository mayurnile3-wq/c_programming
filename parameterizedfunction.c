//parameterized function
#include<stdio.h>
int c;
void sum(int a,int b)
{
  c=a+b;
  printf("addition=%d",c);	
}

void main()
{
	int no1,no2;
	printf("enter two no:-");
	scanf("%d %d",&no1,&no2);
	sum(no1,no2);
	
}
