#include<stdio.h>
int main()
{
    //WRITE A PROGRAM TO ADD TWO MATRICES
    int r,c,i,j;
    //READ DIMENSIONS OF MATRICES
    printf("Enter number of rows and columns:");
    scanf("%d%d",&r,&c);
    int A[100][100], B[100][100], C[100][100], D[100][100];
    //Input  first matrix
    printf("\nEnter elements of Matrix A:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    //Input second matrix
    printf("\nEnter elements of Matrix B:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    //Add corresponding elements
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    //Display resultant matrix
    printf("\nSum of Matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}