//simple calculator
#include<stdio.h>
int main()
{
	int num1,num2;
	char op;
	printf("enter any operator(+,-,*,/,%):-");
	scanf("%c",&op);
	printf("enter two num:-");
	scanf("%d %d",&num1,&num2);
	switch(op)
	{
		 case '+':
	     printf("addition is %d ",num1+num2);
		 break;		
		 
		 case '-':
	     printf("subtraction is %d",num1-num2);
		 break;	
		 
		 case '*':
	     printf("multiplication is %d",num1*num2);
		 break;	
		 
		 case '/':
	     printf("divison is  %d",num1/num2);
		 break;	
		 
		 case '%':
	     printf("module is  %d",num1%num2);
		 break;	
		 
		 default:
		 printf("invalid op");	
	}
	return 0;
}
