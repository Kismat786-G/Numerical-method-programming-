#include <stdio.h>

int main()
{
    int i, j, n;
    float x[20], y[20][20];
    float value, h, p;
    float sum, term;

    printf("Enter number of data points: ");
    scanf("%d", &n);

    printf("Enter x and y values:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%f %f", &x[i], &y[i][0]);
    }

    // Construct backward difference table
    for(j = 1; j < n; j++)
    {
        for(i = n - 1; i >= j; i--)
        {
            y[i][j] = y[i][j-1] - y[i-1][j-1];
        }
    }

    printf("Enter interpolation point: ");
    scanf("%f", &value);

    h = x[1] - x[0];
    p = (value - x[n-1]) / h;

    sum = y[n-1][0];
    term = 1;

    for(i = 1; i < n; i++)
    {
        term = term * (p + (i - 1)) / i;
        sum = sum + term * y[n-1][i];
    }

    printf("\nInterpolated Value = %.4f\n", sum);

    return 0;
}