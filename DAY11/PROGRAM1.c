#include<stdio.h>
//Function to calculate sum of two numbers
int findsum(int a,int b)
{
    return a+b;
}
int main()
{
    int num1,num2,sum;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    //Function Call
    sum=findsum(num1,num2);
    //Display Result
    printf("Sum=%d",sum);
    return 0;
}