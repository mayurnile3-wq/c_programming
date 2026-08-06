#include<stdio.h>
int main()
{
	int r,c,s;
	for(r=0;r<4;r++)
	
    {
    	for(s=0;s<4-r;s++)
    	{
    		printf(" ");
		}
		
    	for(c=0;c<=1*r;c++)
    	 {
    	 	printf("* ");
		 }
		 printf("\n");
	}
	 return 0;
}
