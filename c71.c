//array structure
#include<stdio.h>
struct student 
{
	int id;
	char name[30];
};
int main()
{
	struct student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nenter the id:-");
		scanf("%d",&s[i].id);
		printf("\nenter name:-");
		scanf("%s",&s[i].name);
	}
	printf("\n student informaon:-");
	for(i=0;i<5;i++)
	{
		printf("\nid=%d\nname=%s",s[i].id,s[i].name);
	}
	return 0;
	 
}
