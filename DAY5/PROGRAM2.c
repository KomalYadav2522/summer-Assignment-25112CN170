#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO CHECK STRONG NUMBER
    //A Strong number is a number whose sum of the factorial of its digits is equal to the original number.
    int n,originalnum,digit,i;
    int sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    originalnum=n;//Store original number
    //Extract each digit
    while(n>0)
    {
        digit=n%10;//Get last digit
        int fact=1;//Calculate factorial of each digit
        for(i=1;i<=digit;i++){
            fact=fact*i;
        }
        //Add factorial to sum
        sum=sum+fact;
        //Remove last digit;
        n/=10;
    }
    //Check strong number
    if(sum==originalnum){
        printf("%d is a Strong Number.\n",originalnum);
    }    
    else{
        printf("%d is not a Strong Number.\n",originalnum);
    }
    return 0;
}