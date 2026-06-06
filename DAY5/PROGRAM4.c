#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO FIND LARGEST PRIME FACTOR
    int num,i,j;
    int largestPrimefactor= -1;
    printf("Enter a number: ");
    scanf("%d",&num);
    //Check every number from 2 to num
    for(i=2;i<=num;i++){
        //Check whether i is a factor of num
        if(num%i==0){
            //Assume factor is prime
            int isPrime=1;
            //Check if i is prime
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                    isPrime=0;//Not Prime
                    break;
                }
            }
            //If factor is prime
            if(isPrime==1){
                largestPrimefactor=i;
            }
        }
    }
    printf("Largest Prime Factor=%d\n",largestPrimefactor);
    return 0;
}