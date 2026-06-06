#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO CONVERT BINARY TO DECIMAL
    long long binary;
    int decimal=0;
    int base=1;//Base represents powers of 2
    int digit;
    printf("Enter a binary number:");
    scanf("%lld",&binary);
    while(binary>0)
    {
        digit=binary%10;//Extract last digit
        decimal=decimal+(digit*base);//Digit into current power of 2
        base=base*2;
        binary=binary/10;//Remove last digit
    }
    printf("Decimal Number=%d\n",decimal);
    return 0;
}