#include<stdio.h>
//WRITE A PROGRAM TO DISPLAY AND INPUT ARRAY 
int main()

{
    int n,i;
    //Ask user for array size
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    //INPUT ARRAY ELEMENTS
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //DISPLAY ARRAY ELEMENTS
    printf("Array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}