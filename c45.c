//even or odd
#include<stdio.h>
void check(int n)
{
  if(n%2==0)
  {
  	printf("Even number");    
}
  else
  {
  	printf("Odd number");
  }
}

int main()
{
	int a;
	printf("enter the no:-");
	scanf("%d",&a);
	check(a);
	return 0;
	
}
