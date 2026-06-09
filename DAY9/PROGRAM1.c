#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    //Outer loop
    for(i=1;i<=rows;i++)
    {
        //Print decreasing stars
        for(j=1;j<=rows-i+1;j++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}