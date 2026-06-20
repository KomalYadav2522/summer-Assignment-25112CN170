#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO BINARY SEARCH
    int  n,i,key;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter sorted elements:");//Binary Search works on sorted array
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search:");
    scanf("%d",&key);
    int low=0;
    int high=n-1;
    int mid;
    int found=0;
    //Repeat until search space exist
    while(low<=high)
    {
        //Find middle index
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            found=1;
            break;
        }
        else if(key<arr[mid])
        {
            //Search left half
            high=mid-1;
        }
        else{
            //Search right half
            low=mid+1;
        }
    }
    if(found){
        printf("Element found at position %d",mid+1);
    }
    else{
        printf("Element not found");
    }
    return 0;
}