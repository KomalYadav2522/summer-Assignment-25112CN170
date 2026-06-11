#include<stdio.h>
//FUNCTION TO CHECK PRIME NUMBER
int isPrime(int n)
{
    int i;
    //Numbers less than 2 are not prime
    if(n<2){
        return 0;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0){
            return  0;//Not Prime
        }
    }
    return 1;//Prime
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(isPrime(num)){
        printf("%d is a Prime Number",num);
    }
    else{
        printf("%d is Not a Prime Number",num);
    }
    return 0;

}