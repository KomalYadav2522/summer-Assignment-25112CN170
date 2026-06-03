#include <stdio.h>
int main()
{
    //WRITE A PROGRAM WHETHER A NUMBER IS PRIME 
    int num,isPrime=0;
    printf("Enter a positive number:");
    scanf("%d",&num);
    // 0 and 1 are not prime numbers
    // Change isPrime to 1 for non prime numbers
    if (num==0||num==1)
    {
        isPrime==1;    
    }
    for (int i=2;i<=num/2;++i)
    {
        if(num%i==0){
            isPrime=1;
            break;
        }
    }
    // isPrime is 0 for prime numbers
    if(isPrime==0){
        printf("%d is a prime number.",num);
    }
    else{
        printf("%d is not a prime number.",num);
    }
    return 0;          
}


