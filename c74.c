//doctor
#include<stdio.h>
struct Doctor
{
	int Id;
	char Dname[30];
	char Specialization[30];
	int JDate;
	
};
int main()
{
	int i;
	struct Doctor d[3];
	for(i=0;i<3;i++)
	{
		printf("\nEnter The Id:-");
		scanf("%d",&d[i].Id);
		printf("\nEnter The Dname:-");
        scanf("%s",d[i].Dname);
		printf("\nEnter The Specialization:-");
		scanf("%s",d[i].Specialization);
		printf("\nEnter The JDate:-");
		scanf("%d",&d[i].JDate);
		getchar();
		
	}
	
	 printf("\nDoctor Details:-");
	 
	 for(i=0;i<3;i++)
	 {
	 	printf("\nId=%d Dname=%s Specialization=%s JDate=%d",
		                                     d[i].Id,
											 d[i].Dname,
											 d[i].Specialization,
											 d[i].JDate);
	 }
	 return 0;
}
