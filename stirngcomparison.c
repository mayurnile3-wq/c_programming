//string check
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10];
	char str2[10];
	printf("enter the string1:-");
	scanf("%s",&str1);
	printf("enter the string2:-");
	scanf("%s",&str2);
	strcmp(str1,str2);
	//printf("%d",strcmp(str1,str2));
	if(strcmp(str1,str2)==0)
	{
		printf("\nstrings are equal");
	}
	else
	{
		printf("\nstrings are not equal");
		
	}
	return 0;
}

