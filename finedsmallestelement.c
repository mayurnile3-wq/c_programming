#include<stdio.h>
int main()
{
    int i,n;
    

    printf("\nenter the array size:-");
    scanf("%d",&n);

    int arr[n];

    printf("\nenter array elements:- ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int smallest=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }

    printf("\nsmallest no is %d ",smallest);

    return 0;
}