#include<stdio.h>
//WRITE A PROGRAM TO FIND SUM AND AVERAGE OF ARRAY
int main()
{
    int n,i;
    int sum=0;
    float average;
    //INPUT SIZE OF ARRAY
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    //INPUT ARRAY ELEMENTS
    printf("Enter %d elements:\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //ADD EACH ELEMENT TO SUM
        sum=sum+arr[i];
    } 
    //CALCULATE AVERAGE
    average=(float)sum/n;
    //DISPLAY RESULT
    printf("Sum=%d\n",sum);
    printf("Average=%.2f\n",average);
    return 0;
}