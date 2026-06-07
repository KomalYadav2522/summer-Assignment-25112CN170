#include<stdio.h>
//Recursivr Function to print reverse number
int reverseNumber(int n){
    //Base Case
    if(n==0){
        return 0;
    }
    printf("%d",n%10);//Print last digit
    //Recursive Call
    reverseNumber(n/10);

}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Reverse Number:");
    reverseNumber(num);
    return 0;
}