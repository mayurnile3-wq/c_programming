#include<stdio.h>
int main()
{
	int num;
	printf("enter the num:-");
	scanf("%d",&num);
	if(num==1)
       	{
	    printf("monday");
     	}
	else if(num==2)
	    {
    	printf("tuesday");
   	    }
    else if(num==3)
		{
		printf("wednesday");
  	    }
   	else if(num==4)
		{
 		printf("thursday");
   	    }
    else
       {
     	printf("day not found");
	   }
	return 0;
}
