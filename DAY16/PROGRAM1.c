#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO FIND MISSING NUMBER IN ARRAY
    int n,i;
    int arr[100];
    int actualSum=0;
    int expectedSum;
    int missing;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n-1);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        actualSum+=arr[i];
    }
    expectedSum=n*(n+1)/2;
    missing=expectedSum-actualSum;
    printf("Missing Number=%d",missing);
    return 0;

}