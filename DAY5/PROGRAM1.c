#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO CHECK PERFECT NUMBER
    int n,i;
    int sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0){
            sum=sum+i;
        }
    }//Check whether sum of divisors is equal to the number 
    if(sum==n){
        printf("%d is a Perfect number.\n",n);
    }
    else{
        printf("%d is not a Perfect number.\n",n);
    }
    return 0;
}
