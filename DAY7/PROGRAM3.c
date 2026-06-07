#include<stdio.h>
//Recursive function to calculate sum of digits
int sumDigits(int n)
{
    //Base Case
    if(n==0){
        return 0;
    }
    //Recursive Call
    return (n%10)+sumDigits(n/10); 
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Sum of Digits=%d",sumDigits(num));
    return 0;
}