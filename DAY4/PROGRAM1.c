#include<stdio.h>
int main()
{
    int n,i;
    unsigned long long first=0,second=1,next;
    //Input number of terms
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci Series:\n");
    //Generate fibonacci series
    for(i=1;i<=n;i++)
    {
        printf("%llu ",first);
        next=first+second;
        first=second;
        second=next;
    }
    printf("\n");
    return 0;
}