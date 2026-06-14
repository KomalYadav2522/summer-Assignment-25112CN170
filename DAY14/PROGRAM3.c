#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO FIND SECOND LARGEST ELEMENT
    int arr[100],n,i;
    int largest,secondLargest;
    //INPUT SIZE
    printf("Enter number of elements:");
    scanf("%d",&n);
    //INPUT ARRAY ELEMENTS
    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //ASSUME FIRST ELEMENT IS LARGEST 
    largest=arr[0]; 
    secondLargest=arr[0];
    //FIND LARGEST AND SECONDLARGEST
    for (i=1;i<n;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLargest &&arr[i]!=largest){
            secondLargest=arr[i];
        }
    }
    printf("Second Largest Element=%d",secondLargest);
    return 0;
}