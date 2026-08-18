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
    int secondsmallest=arr[1];
    for(i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            secondsmallest=smallest;
            smallest=arr[i];
        }   
        else if (arr[i]<secondsmallest && arr[i]>smallest)
        {
            secondsmallest=arr[i];  
        }
        
    
    }

    printf("\nsecondsmallest no is %d ",secondsmallest);

    return 0;
}