#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    int A[10][10],B[10][10],result[10][10];
    int i,j,k;
    //Input size of first matrix
    printf("Enter rows and columns of first matrix:");
    scanf("%d%d",&r1,&c1);
    //Input size of second matrix
    printf("Enter rows and columns of second matrix:");
    scanf("%d%d",&r2,&c2);
    //Check compatibility for multiplication
    if(c1!=r2){
        printf("Matrix multiplication is not possible.");
        return 0;
    }
    //Input first matrix
    printf("Enter elements of first matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    //Input second matrix
    printf("Enter elements of second matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    //MATRIX MULTIPLICATION
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            result[i][j]=0;//Initialize
            for(k=0;k<c1;k++)
            {
                result[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    //Display Result
    printf("\nResultant Matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}