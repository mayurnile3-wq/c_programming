//elemnt on even or odd index
#include<stdio.h>
int main()
{
	int arry[10]={2,3,4,2,6,8,4,2,4,1};
	int i;
	int evensum=0;
	int oddsum=1;
	for(i=0;i<10;i++)
	{
	
    	if(i%2==0)
	 
	 	{
	 	printf("\neven index :- %d",arry[i]);
		evensum=evensum+arry[i];
        }
	   else
	   {
	  	
		  printf("\nodd index :- %d",arry[i]);
	   	  oddsum=oddsum*arry[i];
		
		}	
	}
		printf("\neven sum:-%d",evensum);
		printf("\nodd multiplication:-%d",oddsum);
		return 0;
	

}
