#include <stdio.h>

int main()
{
    int i, j, k, n;
    float a[10][11], x[10], factor, sum;

    printf("Enter number of variables: ");
    scanf("%d", &n);

    printf("Enter the augmented matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    // Forward Elimination
    for(k = 0; k < n - 1; k++)
    {
        for(i = k + 1; i < n; i++)
        {
            factor = a[i][k] / a[k][k];

            for(j = k; j <= n; j++)
            {
                a[i][j] = a[i][j] - factor * a[k][j];
            }
        }
    }

    // Back Substitution
    for(i = n - 1; i >= 0; i--)
    {
        sum = 0;

        for(j = i + 1; j < n; j++)
        {
            sum += a[i][j] * x[j];
        }

        x[i] = (a[i][n] - sum) / a[i][i];
    }

    printf("\nSolution:\n");

    for(i = 0; i < n; i++)
    {
        printf("x%d = %.4f\n", i + 1, x[i]);
    }

    return 0;
}