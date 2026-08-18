//reverse number
#include<stdio.h>
int main()
{
	int i,rem,rev=0;
	printf("enter the number:-");
	scanf("%d",&i);
	while(i>0)
	{
		rem=i%10;
		rev=rev*10+rem;
		i=i/10;
	}
	printf("rev :-%d ",rev);
	
	return 0;
}
