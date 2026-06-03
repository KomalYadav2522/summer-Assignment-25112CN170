#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO PRINT PRIME NUMBERS IN RANGE IN C
    int a,b,i,j,flag=0;
    //Ask user to enter lower range value of interval
    printf("Enter lower ramge value:");
    scanf("%d",&a);
    //Ask user to enter upper range value of interval
    printf("Enter upper range value:");
    scanf("%d",&b);
    printf("Prime numbers between %d and %d are:",a,b);
    for(i=a;i<=b;i++)
    {
        //skip 0 and 1 as they are neither prime nor composite
        if(i==1||i==0){
            continue;
        }
        flag==1;
        for(j=2;j<=i/2;++j)
        {
            if(i%j==0){
                flag=0;
                break;
            }
        }
        //flag=1 means i is prime
        //flag=0 means i is not prime
        if(flag==1){
            printf("%d\n",i);
        }
    }
    return 0;
}