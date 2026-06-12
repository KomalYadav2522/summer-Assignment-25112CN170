#include<stdio.h>
//FUNCTION TO CHECK ARMSTRONG NUMBER
int armstrong(int num)
{
    int original=num;
    int digit;
    int sum=0;
    while(num>0)
    {
        digit=num%10;//Extract digit
        sum=sum+(digit*digit*digit);
        num=num/10;
    }
    if(sum==original){
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
    if(armstrong(n)){
        printf("%d is an Armstrong Number.",n);
    }
    else{
        printf("%d is Not an Armstrong Number.",n);
    }
    return 0;
}