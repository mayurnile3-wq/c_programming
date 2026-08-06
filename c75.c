//studebt
#include<stdio.h>
struct student
{
	int Id;
	char Sname[30];
	int Std[30];
	int JDate;
	
};
int main()
{
	int i;
	struct student s[5];
	for(i=0;i<5;i++)
	{
		printf("\nEnter The Id:-");
		scanf("%d",&s[i].Id);
		printf("\nEnter The Sname:-");
		scanf("%s",s[i].Sname);
		printf("\nEnter The Std:-");
		scanf("%d",s[i].Std);
		printf("\nEnter The JDate:-");
		scanf("%d",&s[i].JDate);
		
	}
	
	 printf("\nBook Details:-");
	 
	 for(i=0;i<5;i++)
	 {
	 	printf("\nId=%d Sname=%s Std=%d JDate=%d",
		                                          s[i].Id,
		                                          s[i].Sname,
		 								          s[i].Std,
		 							              s[i].JDate);
	 }
	 return 0;
}
