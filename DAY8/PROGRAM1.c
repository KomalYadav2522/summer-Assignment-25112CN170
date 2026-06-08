#include<stdio.h>
int main()
{
    int i,j,rows;
    //WRITE A PROGRAM TO PRINT HALF PYRAMID PATTERN
    //Taking number of rows from user
    printf("Enter Number of Rows:");
    scanf("%d",&rows);
    //Outer loop controls rows
    for(i=1;i<=rows;i++)
    {
        //Inner Loop print stars in each row
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");//Move cursor to next line after each row
    }
    return 0;
}