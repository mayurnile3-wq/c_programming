//vowels
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i=0,count=0;
	printf("enter the string:-");
	gets(str);
	
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||
		   str[i]=='I'||str[i]=='O'||str[i]=='o'||str[i]=='u'||str[i]=='U')
		    {
		      count++;
	        }
		i++;
	}
	printf("total vowels is =%d",count);
	return 0;
}
