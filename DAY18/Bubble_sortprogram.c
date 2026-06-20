#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO BUBBLE SORT
    int n,i,j,temp;
    //READ SIZE OF ARRAY
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    //INPUT ARRAY ELEMENTS
    printf("Enter array elemnts:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //BUBBLE SORT LOGIC
    //Outer loop controls number of passes
    for(i=0;i<n-1;i++)
    {
        //Inner loop compares adjacent elements
        for(j=0;j<n-i-1;j++)
        {
            //Swap if left element is greater
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }
    //Display sorted array
    printf("\nSorted Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}