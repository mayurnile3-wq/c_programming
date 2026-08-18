#include<stdio.h>
{
int main()
    
	int i,n;
	int largest=0;
    int secondlargest=0;
	printf("\nenter the array size:-");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	printf("\nenter array elements:- ");
	{
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>largest)
		{
			secondlargest=largest;
			largest=arr[i];
		}
		else if(arr[i]>secondlargest && arr[i]!=largest)
		{
			secondlargest=arr[i];
		}
	}
	printf("\nsecond largest no is %d ",secondlargest);
	return 0;

}