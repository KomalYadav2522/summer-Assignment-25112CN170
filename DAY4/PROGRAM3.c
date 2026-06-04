#include<stdio.h>
#include<math.h>
int main()
{
    //WAP TO CHECK A ARMSTRONG NUMBER
    int num, originalnum, rem, digit=0;
    long long sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    originalnum=num;//store the original number for comparison later
    while(originalnum!=0){
        digit++;
        originalnum/=10;
    }//count the number of digits
    originalnum=num;//restore original number
    while(originalnum!=0){
        rem=originalnum%10;//extract last digit
        sum+=(int) pow(rem,digit);
        originalnum/=10;//remove last digit
    }
    if(sum==num){
        printf("%d is an Armstrong Number.",num);
    }
    else{
        printf("%d is not an Armstrong Number.",num);
    }
    return 0;

}