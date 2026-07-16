#include <stdio.h>

int main()
{
    int i, j, k, n;
    float A[10][10], L[10][10] = {0}, U[10][10] = {0};
    float sum;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of matrix A:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%f", &A[i][j]);
        }
    }

    for(i = 0; i < n; i++)
        U[i][i] = 1;

    for(j = 0; j < n; j++)
    {
        // Compute L
        for(i = j; i < n; i++)
        {
            sum = 0;
            for(k = 0; k < j; k++)
                sum += L[i][k] * U[k][j];

            L[i][j] = A[i][j] - sum;
        }

        // Compute U
        for(i = j + 1; i < n; i++)
        {
            sum = 0;
            for(k = 0; k < j; k++)
                sum += L[j][k] * U[k][i];

            U[j][i] = (A[j][i] - sum) / L[j][j];
        }
    }

    printf("\nLower Triangular Matrix (L):\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%.2f\t", L[i][j]);
        printf("\n");
    }

    printf("\nUpper Triangular Matrix (U):\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%.2f\t", U[i][j]);
        printf("\n");
    }

    return 0;
}