#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n, iter = 0;
    float a[10][10], b[10];
    float x[10] = {0}, newX[10];
    float tolerance, error;

    printf("Enter number of variables: ");
    scanf("%d", &n);

    printf("Enter coefficient matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    printf("Enter constant terms:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &b[i]);
    }

    printf("Enter tolerance: ");
    scanf("%f", &tolerance);

    do
    {
        error = 0;

        for(i = 0; i < n; i++)
        {
            float sum = b[i];

            for(j = 0; j < n; j++)
            {
                if(i != j)
                    sum -= a[i][j] * x[j];
            }

            newX[i] = sum / a[i][i];
        }

        for(i = 0; i < n; i++)
        {
            if(fabs(newX[i] - x[i]) > error)
                error = fabs(newX[i] - x[i]);

            x[i] = newX[i];
        }

        iter++;

    } while(error > tolerance);

    printf("\nSolution after %d iterations:\n", iter);

    for(i = 0; i < n; i++)
    {
        printf("x%d = %.4f\n", i + 1, x[i]);
    }

    return 0;
}