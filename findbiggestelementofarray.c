#include<stdio.h>
int main()
{
	int i,n;
	int num=0;
	printf("\nenter the array size:-");
	scanf("%d",&n);
	int arr[n];
	printf("\nenter array elements:- ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>num)
		{
			num=arr[i];
		}
		
	}
	printf("\nlargest no is %d ",num);
	return 0;
}
