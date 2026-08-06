#include<stdio.h>
int main()
{
	int r,c;
    for(r=0;r<5;r++)
	   {
	   	 for(c=0;c<5;c++)
	   	  {
	   	  	if(c==0||r==0 || (r==2&&c==2)||(r==2&&c==3)||(r==2&&c==4) ||( r==3&&c==2)||(r==3&&c==4)||(r==4&&c==1)||(r==4&&c==2)||(r==4&&c==4))
	   	    	{
	   	 		  printf("*");
				}
			else
			    {
			    	printf(" ");
				}	
			}
			printf("\n");
		   }	
    return 0;
}
