#include<stdio.h>
//WRITE A PROGRAM TO COUNT EVEN AND ODD ELEMENTS IN ARRAY
int main()
{
    int n,i;
    int even=0,odd=0;
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
    //CHECK EACH ELEMENT
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;//INCREASE EVEN COUNT
        }
        else{
            odd++;//INCREASE ODD COUNT
        }  
    }
    //DISPLAY RESULT
    printf("Total Even Elements=%d\n",even);
    printf("Total odd elements=%d\n",odd);
    return 0;
}