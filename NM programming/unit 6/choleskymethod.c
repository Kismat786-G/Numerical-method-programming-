#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, k, n;
    float A[10][10], L[10][10] = {0}, sum;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter symmetric matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%f", &A[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            sum = 0;

            if(i == j)
            {
                for(k = 0; k < j; k++)
                    sum += L[j][k] * L[j][k];

                L[j][j] = sqrt(A[j][j] - sum);
            }
            else
            {
                for(k = 0; k < j; k++)
                    sum += L[i][k] * L[j][k];

                L[i][j] = (A[i][j] - sum) / L[j][j];
            }
        }
    }

    printf("\nLower Triangular Matrix (L):\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%.2f\t", L[i][j]);
        printf("\n");
    }

    printf("\nTranspose Matrix (LT):\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%.2f\t", L[j][i]);

        printf("\n");
    }

    return 0;
}