#include<stdio.h>
int main()
{
    int n,i,j,sum = 0;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    int A[100][100];
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    // Add main diagonal elements
    for(i = 0; i < n; i++)
    {
        sum = sum + A[i][i];
    }
    printf("Sum of Main Diagonal = %d", sum);
    return 0;
}