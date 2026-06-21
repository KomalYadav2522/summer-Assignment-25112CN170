#include<stdio.h>
int main()
{
    int A[10][10];
    int n,i,j,flag=1;
    printf("Enter order of square matrix:");
    scanf("%d",&n);
    printf("Enter matrix elements:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    //Check symmetry
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i][j]!=A[j][i])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("Matrix is Symmetric");
    }
    else{
        printf("Matrix is Not Symmetric.");
    }
    return 0;
}