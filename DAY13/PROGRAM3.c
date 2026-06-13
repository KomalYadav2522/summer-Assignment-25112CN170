#include<stdio.h>
//WRITE A PROGRAM TO FIND LARGEST AND SMALLEST ELEMENT IN ARRAY
int main()
{
    int n,i,j,temp;
    //INPUT SIZE OF ARRAY
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    //INPUT ARRAY ELEMENTS
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //Sorting array in ascending order
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }

    }
    //First element=smallest
    //Last element=largest
    printf("Smallest Element=%d\n",arr[0]);
    printf("Largest Element=%d\n",arr[n-1]);
    return 0;
}