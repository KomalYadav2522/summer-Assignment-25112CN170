#include<stdio.h>
int main()
{
    //Write a program to print number triangle
    int i,j,rows;
    //Input number of rows
    printf("Enter number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");//Go to next line
    }
    return 0;
}