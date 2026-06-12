#include<stdio.h>
//FUNCTION TO CHECK PERFECT NUMBER
int perfect(int num)
{
    int i;
    int sum=0;
    //FIND FACTORS
    for(i=1;i<num;i++)
    {
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
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
    if(perfect(n)){
        printf("%d is a Perfect Number.",n);
    }
    else{
        printf("%d is Not a Perfect Number.",n);
    }
    return 0;
}