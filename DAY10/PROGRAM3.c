#include<stdio.h>
int main()
{
    int rows,i,j,k;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)//OUTER LOOP CONTROLS ROWS
    {
        for(j=1;j<=rows-i;j++)//PRINT SPACES
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)//PRINT ASCENDING NUMBERS
        {
            printf("%d",j);
        }
        for(k=i-1;k>=1;k--)//PRINT DESCENDING NUMBERS
        {
            printf("%d",k);
        }
        printf("\n");

    }
    return 0;

}