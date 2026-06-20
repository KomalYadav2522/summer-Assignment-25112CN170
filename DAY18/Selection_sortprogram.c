#include<stdio.h>
int main()
{
    int n, i, j, minIndex, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Selection Sort
    for(i = 0; i < n - 1; i++)
    {
        // Assume current element is minimum
        minIndex = i;
        // Search smallest element
        for(j=i+1;j<n;j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap smallest element with current element
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    printf("\nSorted Array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}