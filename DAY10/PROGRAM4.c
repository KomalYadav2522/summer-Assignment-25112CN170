#include<stdio.h>
int main()
{
    int rows,i,j;
    printf("Enter number of rows:");
    scanf("%d",rows);
    for(i=1;i<=rows;i++)
    {
        for(j=rows-i;j>=1;j--)//PRINT SPACES
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("%c",65+j);//ASCENDING PART
        }
        for(j=i-2;j>=0;j--)//PRINT CHARACTERS IN REVERSE ORDER
        {
            printf("%c",65+j);
        }
        printf("\n");
    }
    return 0;
}