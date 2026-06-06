#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO PRINT FACTORS OF NUMBER
    int num,i;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Factors of %d are:\n",num);
    //Check all numbers from 1 to num
    for(i=1;i<=num;i++){
        if(num%i==0){
            printf("%d\n",i);
        }
    }
    return 0;

}