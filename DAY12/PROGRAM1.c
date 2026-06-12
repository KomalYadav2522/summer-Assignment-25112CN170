#include<stdio.h>
int palindrome(int num)
{
    int original=num;
    int reverse=0;
    int digit;
    while(num>0)
    {
        digit=num%10;//Extract last digit
        reverse=reverse*10+digit;//Form reverse number
        num=num/10;//Remove last digit;
    }
    if(original==reverse)
    {
        return 1;
    }
    else{
        return 0;
    }

}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(palindrome(n)){
        printf("%d is a Palindrome number.",n);
    }
    else{
        printf("%d is Not a Palindrome Number.",n);
    }
    return 0;
}