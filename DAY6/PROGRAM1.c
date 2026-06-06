#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO CONVERT DECIMAL TO BINARY
    int n,rem;
    long long binary=0;
    int place=1;//Variable to decide the position of each binary digit
    printf("Enter a decimal number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%2;
        binary=binary+(rem*place);//ADD REMAINDER AT PROPER POSITION
        place=place*10;
        n=n/2;//Divide number for next iteration

    }
    printf("Binary Number=%lld",binary);
    return 0;
}