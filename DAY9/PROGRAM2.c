#include<stdio.h>
int main()
{
    //PRINT REVERSE NUMBER TRIANGLE
    int i,j,rows;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    //Outer Loop
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i+1;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
