//palindrome
#include<stdio.h>
void palindrome(int n)
{
	int temp=n,rev=0,rem;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}

	if(rev==temp)
	{
		printf("\nis palindrome");
		
	}
	else
	{
		printf("\nis not palindrome");
	}
}
	int main()
{
	int a;
	printf("enter the no-");
	scanf("%d",&a);
	palindrome(a);
	return 0;
	
}
