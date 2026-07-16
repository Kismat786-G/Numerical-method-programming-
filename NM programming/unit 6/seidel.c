#include <stdio.h>
#include <math.h>

int main()
{
    float a[10][10], b[10], x[10] = {0};
    float old[10], error, tolerance;
    int i, j, n, iter = 0;

    printf("Enter number of variables: ");
    scanf("%d", &n);

    printf("Enter coefficient matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%f", &a[i][j]);

    printf("Enter constant terms:\n");
    for(i = 0; i < n; i++)
        scanf("%f", &b[i]);

    printf("Enter tolerance: ");
    scanf("%f", &tolerance);

    do
    {
        error = 0;

        for(i = 0; i < n; i++)
            old[i] = x[i];

        for(i = 0; i < n; i++)
        {
            float sum = b[i];

            for(j = 0; j < n; j++)
            {
                if(j != i)
                    sum -= a[i][j] * x[j];
            }

            x[i] = sum / a[i][i];

            if(fabs(x[i] - old[i]) > error)
                error = fabs(x[i] - old[i]);
        }

        iter++;

    } while(error > tolerance);

    printf("\nSolution after %d iterations:\n", iter);

    for(i = 0; i < n; i++)
        printf("x%d = %.4f\n", i + 1, x[i]);

    return 0;
}