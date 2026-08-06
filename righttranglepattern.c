#include<stdio.h>
int main()
{
	 
	int r,c,s;
	for(r = 0; r < 5; r++)
	{  
	   for(s = 0;s < 5-r; s++)
	    {
	    	printf(" ");
	    }
	   
	       for(c = 0; c <= r; c++)
		   {
		    	printf("*");
		   }
	   
		printf("\n");
	}
	return 0;
}
