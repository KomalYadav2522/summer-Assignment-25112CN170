#include<stdio.h>
//Function to print fibonacci series
int fibonacci(int n)
{
    int a=0;
    int b=1;
    int c,i;
    printf("Fibonacci series:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
        c=a+b;//Calculate next term
        a=b;
        b=c;
    }
}
int main()
{
    int terms;
    printf("Enter number of terms:");
    scanf("%d",&terms);
    //FUNCTION CALL
    fibonacci(terms);
    return 0;
}