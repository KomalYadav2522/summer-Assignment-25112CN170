#include <stdio.h>
//WRITE A PROGRAM TO FIND SUM OF DIGITS OF A GIVEN NUMBER
int main()
{
    int num,sum=0,digit;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    if (num<0)num= -num;
    while(num!=0)
    {
        digit=num%10;
        sum+=digit;
        num/=10;
    }
    printf("Sum of digits of number is:%d\n",sum);
    return 0;
}