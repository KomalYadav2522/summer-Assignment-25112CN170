#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO REVERSE ARRAY
    int arr[100],n,i;
    //INPUT NUMBER OF ELEMENTS
    printf("Enter number of elements:");
    scanf("%d",&n);
    //INPUT ARRAY ELEMENTS
    printf("Enter array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("REVERSED ARRAY:");
    //PRINT FROM LAST INDEX TO FIRST INDEX
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}