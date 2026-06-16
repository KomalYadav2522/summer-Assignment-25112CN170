#include<stdio.h>
int main()
{
    int arr[100];
    int n,i,j;
    int count;
    int maxFreq = 0;
    int maxElement;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count = 1;

        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count > maxFreq)
        {
            maxFreq = count;
            maxElement = arr[i];
        }
    }
    printf("Maximum Frequency Element = %d",maxElement);
    printf("\nFrequency = %d",maxFreq);
    return 0;
}
