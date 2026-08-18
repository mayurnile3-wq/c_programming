#include<stdio.h>
int main()
{
    
    int i,n;
    printf("enter your no:-");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter your number:-\n");

    for(i=0;i<n;i++)
	{
	  scanf("%d",&arr[i]);
	  printf("%d arrays is %d\n:-",i,arr[i]);
	
	}
	printf(" %d count is:-",n);
	
	return 0;
}
