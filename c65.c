//check the data
#include<stdio.h>
int main()
{
	char ch;
	printf("enter the value:-");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
     	{
	    	printf("this is uppercase");
    	}
    else if(ch>='a' && ch<='z')
       {
       	    printf("this is lowercase");
       }  
    else if(ch>='0' && ch<='9')
	
       {
       	    printf("this is number");
       }       	   
 	else
 	   {
 	   	    printf("this is specialcharacter");
	   }
	return 0;
}
