//lower lower case using ascii value
#include<stdio.h>
int main()
{
	char str[100];
	int i=0;
	printf("enter the string:-");
	fgets(str,sizeof(str),stdin);
	
	while(str[i]!= '\0')
{
	
	if(str[i]>='A' && str[i]<='Z')
	{
		str[i]=str[i]+32;
	}
	 i++;
}
    printf("lowercase=%s",str);
    return 0;
}
