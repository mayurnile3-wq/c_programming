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
