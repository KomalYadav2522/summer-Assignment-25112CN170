#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO SORT ARRAY IN DESCENDING ORDER
    int n,i,j,temp;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //Sort array in descending order using bubble sort approach
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            //Swap if element is smaller
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    } 
    printf("Array in Descending Order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}