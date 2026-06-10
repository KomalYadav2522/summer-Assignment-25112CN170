#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO PRINT STAR PYRAMID 
    int i,j,rows;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)//PRINT SPACES BEFORE STARS
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)//PRINT STARS
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}