//string function 
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50]="hello";
	char str2[50]="world";
	char str3[50];
	printf("length is=%d",strlen(str1)); //for finding lenghth
	printf("\ncopy string is=%s",strcpy(str3,str1));//for copy
	printf("\nreverse string=%s",strrev(str2));//reverse
	printf("\nupparcase is=%s",strupr(str1));//uppercase
	printf("\nlowercase is=%s",strlwr(str2));//lowercase
	printf("\nconcatstr=%s", strcat(str1,str2));//combined
	
	return 0;
	
	
}
