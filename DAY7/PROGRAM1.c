#include<stdio.h>
    //WRITE A PROGRAM TO RECURSIVE FACTORIAL
    long long factorial(int n)
    {
        //Base Case
        if(n==0||n==1){
            return 1;
        }
        //Recursive Call
        return n*factorial(n-1);
    }
    int main()
    {
        int n;
        printf("Enter a number:");
        scanf("%d",&n);
        printf("Factorial of %d =%lld",n,factorial(n));
        return 0;
    }


    

