#include <stdio.h>

int main()
{
    int i, j, k, n;
    float a[10][20], ratio;

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

    for(i = 0; i < n; i++)
    {
        // Make pivot element 1
        ratio = a[i][i];

        for(j = 0; j <= n; j++)
        {
            a[i][j] = a[i][j] / ratio;
        }

        // Eliminate other rows
        for(k = 0; k < n; k++)
        {
            if(k != i)
            {
                ratio = a[k][i];

                for(j = 0; j <= n; j++)
                {
                    a[k][j] = a[k][j] - ratio * a[i][j];
                }
            }
        }
    }

    printf("\nSolution:\n");

    for(i = 0; i < n; i++)
    {
        printf("x%d = %.4f\n", i + 1, a[i][n]);
    }

    return 0;
}