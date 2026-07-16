#include <stdio.h>

int main()
{
    int i, j, n;
    float x[20], y[20][20];
    float value, sum, product;

    printf("Enter number of data points: ");
    scanf("%d", &n);

    printf("Enter x and y values:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%f %f", &x[i], &y[i][0]);
    }

    // Construct divided difference table
    for(j = 1; j < n; j++)
    {
        for(i = 0; i < n - j; i++)
        {
            y[i][j] = (y[i+1][j-1] - y[i][j-1]) /
                      (x[i+j] - x[i]);
        }
    }

    printf("Enter interpolation point: ");
    scanf("%f", &value);

    sum = y[0][0];
    product = 1;

    for(i = 1; i < n; i++)
    {
        product = product * (value - x[i-1]);
        sum = sum + product * y[0][i];
    }

    printf("\nInterpolated Value = %.4f", sum);

    return 0;
}