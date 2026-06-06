#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO FIND X^n WITHOUT USING POW()
    int x;//variable to store base value
    int n;//variable to store power
    long long result=1;
    int i;
    printf("Enter the base (X):");
    scanf("%d",&x);
    printf("Enter the power(n):");
    scanf("%d",&n);
    //Repeat multiplication n times
    for(i=1;i<=n;i++){
        result=result*x;

    }
    printf("%d raised to the power %d =%lld\n",x,n,result);
    return 0;
}