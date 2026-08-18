//find password and username
#include<stdio.h>
int main()
{
	char username[50];
	char password[50];
	printf("enter your username:-");
	scanf("%s",&username);
	printf("\nenter your password:-");
	scanf("%s",&password);
	if(strcmp(username,"admin")==0 && strcmp(password,"admin@123")==0)
	{
		printf("\nlogin successfully");
		
	}
	else
	{
		printf("\nlogin fail");
	}
	 return 0;
}
