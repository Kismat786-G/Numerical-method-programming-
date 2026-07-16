#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;

    float x[20], y[20];

    float X = 0, Y = 0;
    float XY = 0, X2 = 0;

    float A, a, b;

    printf("Enter number of observations: ");
    scanf("%d", &n);

    printf("Enter x and y values:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%f %f", &x[i], &y[i]);

        X += x[i];
        Y += log(y[i]);

        XY += x[i] * log(y[i]);

        X2 += x[i] * x[i];
    }

    b = (n * XY - X * Y) /
        (n * X2 - X * X);

    A = (Y - b * X) / n;

    a = exp(A);

    printf("\nBest Fit Curve:\n");

    printf("y = %.4fe^(%.4fx)\n", a, b);

    return 0;
}