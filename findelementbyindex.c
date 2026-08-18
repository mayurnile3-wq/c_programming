#include<stdio.h>
int main()
{
	int i,n,index;
	printf("\nenter the array size:-");
	scanf("%d",&n);
	int arr[n];
	printf("\nenter array elements:- ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nenter the index no:-");
	scanf("%d",&index);
	
	for(i=0;i<n;i++)
	{
		if(i==index)
		printf("%d",arr[i]);
		
	}
	return 0;
}
