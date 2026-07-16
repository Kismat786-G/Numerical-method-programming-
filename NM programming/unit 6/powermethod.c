#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n, iter;
    float A[10][10], X[10], Y[10];
    float max, eigenvalue;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%f", &A[i][j]);
        }
    }

    printf("Enter initial vector:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &X[i]);
    }

    printf("Enter number of iterations: ");
    scanf("%d", &iter);

    while(iter--)
    {
        // Matrix multiplication
        for(i = 0; i < n; i++)
        {
            Y[i] = 0;

            for(j = 0; j < n; j++)
            {
                Y[i] += A[i][j] * X[j];
            }
        }

        // Find largest element
        max = fabs(Y[0]);

        for(i = 1; i < n; i++)
        {
            if(fabs(Y[i]) > max)
                max = fabs(Y[i]);
        }

        // Normalize
        for(i = 0; i < n; i++)
        {
            X[i] = Y[i] / max;
        }

        eigenvalue = max;
    }

    printf("\nDominant Eigenvalue = %.4f\n", eigenvalue);

    printf("\nEigenvector:\n");

    for(i = 0; i < n; i++)
    {
        printf("%.4f\n", X[i]);
    }

    return 0;
}