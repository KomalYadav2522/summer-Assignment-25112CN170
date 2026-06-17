#include<stdio.h>
 int main()
 {
    //WRITE A PROGRAM TO FIND PAIR WITH GIVEN SUM
    int arr[100];
    int n,i,j,sum;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter target sum:");
    scanf("%d",&sum);
    printf("Pairs are:\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
 }