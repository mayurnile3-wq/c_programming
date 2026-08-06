#include<stdio.h>
int main()
{
	int r,c;
	for(r=5;r>0;r--)
	{
		for(c=1;c<=r;c++)
		{
			if(r%2==0)
			{
			   printf("2");
		    }
		    else
		    {
		    	printf("3");
			}
			}
		printf("\n");
	}
	return 0;
}
