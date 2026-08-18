//check number is palindrome or not

#include<stdio.h>
int main()
{
	int i,n,rem,rev=0;
	printf("enter the number:-");
	scanf("%d",&i);
	n=i;
	while(i>0)
	{
		rem=i%10;
		rev=rev*10+rem;
		i=i/10;
	}
	printf("rev :-%d ",rev);
	if(n==rev)
	{
		printf("this is palindrome");
		
	}
	else
	{
		printf("this is not palindrome");
	}
	return 0;
}
