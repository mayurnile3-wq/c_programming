	`//factorial
#include<stdio.h>
int main()
{
	int n,i;
	long long fact=1;
	printf("enter your no:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d fact =%lld",n,fact);
	return 0;

}
