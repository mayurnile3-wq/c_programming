//library
#include<stdio.h>
struct library
{
	int Id;
	int Price;
	char Bname[30];
	char Wname[30];
	int Date;
	
};
int main()
{
	int i;
	struct library l[5];
	for(i=0;i<5;i++)
	{
		printf("\nEnter The Id:-");
		scanf("%d",&l[i].Id);
		printf("\nEnter The Bname:-");
		scanf("%s",l[i].Bname);
		printf("\nEnter The Wname:-");
		scanf("%s",l[i].Wname);
		printf("\nEnter The Price:-");
		scanf("%d",&l[i].Price);
		printf("\nEnter The Date:-");
		scanf("%d",&l[i].Date);
		
	}
	
	 printf("\nBook Details:-");
	 
	 for(i=0;i<5;i++)
	 {
	 	printf("\nId=%d Bname=%s Wname=%s Price=%d Date=%d",
		                                          l[i].Id,
		                                          l[i].Bname,
		 								          l[i].Wname,
		 										  l[i].Price,
		                                          l[i].Date);
	 }
	 return 0;
}
