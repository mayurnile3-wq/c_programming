//table using while loop

#include<stdio.h>
int main()
{
	int i=1;
	int n;
	printf("enter your number:-");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("\n%d * %d = %d",i,n,i*n);
		i++;
	}
}
