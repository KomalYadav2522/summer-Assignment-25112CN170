#include<stdio.h>
int main()
{
    int n,first=0,second=1,next,i;
    printf("Enter n:");
    scanf("%d",&n);
    if(n==1){
        printf("The %dth fibonacci term is %d",n,first);
    }
    else if(n==2){
        printf("The %dth fibonacci term is %d",n,second);
    }
    else{
        for(i=3;i<=n;i++)
        {
            next=first+second;
            first=second;
            second=next;
        }
        printf("The %dth Fibonacci term is %d",n,second);
    }
    return 0;
}
