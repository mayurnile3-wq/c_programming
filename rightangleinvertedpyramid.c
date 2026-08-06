#include<stdio.h>
int main()
{
	int r,c,s;
	for(r=5;r>=0;r--)
	
	{ 
	  for(s=1;s<=(5-r);s++)
	  {
	  	printf(" ");
	   }
		for(c=1;c<=r;c++)
		{
			if(r%2==0)
			{
			   printf("s");
		    }
		    else
		    {
		    	printf("p");
			}
			}
		printf("\n");
	}
	return 0;
}
