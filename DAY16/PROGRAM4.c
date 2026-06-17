#include<stdio.h>
int main()
{
    int arr[100];
    int n,i,j;
    int duplicate;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array after removing duplicates:\n");
    for(i=0;i<n;i++)
    {
        duplicate = 0;
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                duplicate = 1;
                break;
            }
        }
        if(duplicate==0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}