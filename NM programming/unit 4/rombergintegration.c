#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x * x;
}

int main()
{
    int i, j, k, n;
    float a, b, h, sum;
    float R[10][10], x;

    printf("Enter lower limit (a): ");
    scanf("%f", &a);

    printf("Enter upper limit (b): ");
    scanf("%f", &b);

    printf("Enter number of Romberg levels: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        int m = pow(2, i);

        h = (b - a) / m;

        sum = (f(a) + f(b)) / 2.0;

        for(k = 1; k < m; k++)
        {
            x = a + k * h;
            sum += f(x);
        }

        R[i][0] = h * sum;
    }

    // Richardson Extrapolation
    for(j = 1; j < n; j++)
    {
        for(i = j; i < n; i++)
        {
            R[i][j] = R[i][j-1] +
                     (R[i][j-1] - R[i-1][j-1]) /
                     (pow(4, j) - 1);
        }
    }

    printf("\nRomberg Integration Table:\n\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
            printf("%.6f\t", R[i][j]);

        printf("\n");
    }

    printf("\nApproximate Integral = %.6f\n", R[n-1][n-1]);

    return 0;
}