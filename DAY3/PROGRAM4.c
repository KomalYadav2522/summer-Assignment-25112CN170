#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO FIND LCM OF TWO NUMBERS
    //We will find LCM with the help of GCD
    int n1,n2,i,gcd,lcm;
    printf("ENTER TWO POSITIVE INTEGRS:");
    scanf("%d%d",&n1,&n2);
    //loop to find GCD
    for(i=1;i<=n1&&i<=n2;++i){
        //check whether i is factor of both integers
        if (n1%i==0&&n2%i==0){
            gcd=i;
        }
    }
    lcm=(n1*n2)/gcd;
    printf("The LCM of two numbers %d and %d is %d.",n1,n2,lcm);
    return 0;
}