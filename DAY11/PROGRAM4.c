#include<stdio.h>
//FUNCTION TO CALCULATE FACTORIAL
long long factorial(int n)
{
    long long fact=1;
    int i;
    for(i=1;i<=n;i++)
    {

        fact*=i;
    }
    return fact;
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0){
        printf("Factorial is not defined for negative numbers.");
    }
    else{
        //FUNCTION CALL
        printf("Factorial=%d",factorial(num));
    }    
    return 0;
}