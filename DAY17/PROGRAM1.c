#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO MERGE ARRAYS
    int arr1[100],arr2[100],merge[200];
    int n1,n2,i,k=0;
    printf("Enter size of first array:");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of second array:");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    //COPY FIRST ARRAY
    for(i=0;i<n1;i++)
    {
        merge[k]=arr1[i];
        k++;
    }
    //COPY SECOND ARRAY
    for(i=0;i<n2;i++)
    {
        merge[k]=arr2[i];
        k++;
    }
    printf("Merged Array:");
    for(i=0;i<k;i++)
    {
        printf("%d ",merge[i]);
    }
    return 0;


}