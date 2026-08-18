#include<stdio.h>
int main()
{
	int i,n,element;
	printf("\nenter the array size:-");
	scanf("%d",&n);
	int arr[n];
	printf("\nenter array elements:- ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nenter the element:-");
	scanf("%d",&element);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==element)
		printf("element is on %d index",i);
		
	}
	return 0;
}
