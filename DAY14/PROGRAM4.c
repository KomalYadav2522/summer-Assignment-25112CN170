#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO FIND DUPLICATE ELEMENTS IN AN ARRAY
    int arr[100],n,i,j;
    int count;
    //INPUT SIZE OF ARRAY
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    //INPUT ARRAY ELEMENTS
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elemenys are:");
    //TRAVERSE ARRAY
    for(i=0;i<n;i++){
        count=0;
        //Check whether current element appeared before
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                count=-1;
                break;
            }
        }
        //If already checked,skip
        if(count==-1){
            continue;
        } 
        //COUNT FREQUENCY
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        //If frequency greater than 1 it is duplicate
        if(count>1){
            printf("%d ",arr[i]);
        }
    }
    return 0;

}