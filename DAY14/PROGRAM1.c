#include<stdio.h>
int main()
{
    int n,i,key;
    int found=0;
    //INPUT SIZE OF ARRAY
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    //INPUT ARRAY ELEMENTS
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    //ELEMENT TO SEARCH
    printf("Enter element to search:");
    scanf("%d",&key);
    //LINEAR SEARCH
    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at position %d",i+1);
            found=1;
            break;
        }
    }
    //If element not found
    if(found==0)
    {
        printf("Element not found.");
    }
    return 0;

}
