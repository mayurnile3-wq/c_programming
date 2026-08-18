//sum of first 10 numbers and check sum is even or odd
#include<stdio.h>
int main()
{
	int i;
	int sum=0;
	for(i=1;i<=10;i++)
	{
	 
	 sum =sum+i;	
	  
	}
	printf("sum%d",sum);
     	if(sum%2==0)
    	printf("even");
     	else
     	printf("odd");
	 
	 
	return 0;
}
