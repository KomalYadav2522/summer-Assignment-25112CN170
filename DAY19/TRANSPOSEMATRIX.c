#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO TRANSPOSE A MATRIX
    int r,c,i,j;
    //READ DIMENSIONS OF MATRICES
    printf("Enter number of rows and columns:");
    scanf("%d%d",&r,&c);
    int A[100][100], T[100][100];
    //Input matrix
    printf("\nEnter elements of Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    //Find Transpose
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            T[j][i]=A[i][j];
        }
    }
    //Display transpose matrix
    printf("\nTranspose matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",T[i][j]);
        }
        printf("\n");
    }
    return 0;
}