#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO ROTATE ARRAY LEFT
    int arr[100],temp[100];
    int n,k,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number of rotations:");
    scanf("%d",&k);
    k=k%n;
    //STORE ROTATAED ELEMENTS
    for(i=0;i<n;i++)
    {
        temp[i]=arr[(i+k)%n];
    }
    printf("Array after left rotation:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",temp[i]);
    }
    return 0;
}