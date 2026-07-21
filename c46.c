#include<stdio.h>
void fact(int n)
{
	while(n>0)
	{
		n--;
		printf("%d * %d =%d",n,n-1,n*n-1);
		
	}
}
void main()
{
	int a;
	printf("enter the no:-");
	scanf("%d",&a);
	fact(a);
}
