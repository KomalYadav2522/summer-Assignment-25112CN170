#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO FIND FREQUENCY OF ELEMENT
    int arr[100],n,i,key;
    int count=0;
    //INPUT SIZE OF ARRAY
    printf("Enter number of elements:");
    scanf("%d",&n);
    //INPUT ARRAY ELEMENTS
    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Element whose frequency is required
    printf("Enter element:");
    scanf("%d",&key);
    //COUNT FREQUENCY
    for(i=0;i<n;i++){
        if (arr[i]==key){
            count++;
        }
    }
    printf("Frequency of %d =%d",key,count);
    return 0;
}