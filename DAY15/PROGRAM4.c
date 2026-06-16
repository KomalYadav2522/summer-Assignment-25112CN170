#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO MOVE ZEROES TO END IN ARRAY
    int arr[100],n,i,j=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //MOVE NON-ZERO ELEMENTS TO FRONT
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    //FILL REMAINING POSITIONS WITH 0
    while(j<n){
        arr[j]=0;
        j++;
    }
    printf("Array after moving zeroes:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}