//union
#include<stdio.h>
#include<string.h>
union employee
{
	int id;
	char name[20];
}e1;

int main()
{
	e1.id=101;
	strcpy(e1.name,"abcd");
	printf("id=%d \nname=%s",e1.id,e1.name);
	return 0;
}
