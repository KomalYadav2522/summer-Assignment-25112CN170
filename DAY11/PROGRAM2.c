#include<stdio.h>
//FUNCTION TO FIND MAXIMUM NUMBER
int findMax(int a,int b)
{
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int num1,num2,max;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    //FUNCTION CALL
    max=findMax(num1,num2);
    printf("MaximumNumber=%d",max);
    return 0;
}