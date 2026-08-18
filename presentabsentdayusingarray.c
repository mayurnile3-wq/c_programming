//array to find present absent days
#include<stdio.h>
int main()
{
	int attendence[7]={1,0,0,1,1,1,1};
	int i;
	int count=0;
	int count2=0;
	for(i=0;i<7;i++)
	{
		if(attendence[i]==1)
		{
			count++;
			printf("\npresent");
		}
		else
		{    
     	    count2++;
			printf("\nabsent");
		}
		
	}
	   printf("\ntotal present:-%d",count);
	   printf("\ntotal absent:-%d",count2);
	 return 0;
	
}
