#include <stdio.h>

int main()
{
    int i, n;
    float x[20], y[20];
    float sumx = 0, sumy = 0;
    float sumxy = 0, sumx2 = 0;
    float a, b;

    printf("Enter number of observations: ");
    scanf("%d", &n);

    printf("Enter x and y values:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%f %f", &x[i], &y[i]);

        sumx += x[i];
        sumy += y[i];
        sumxy += x[i] * y[i];
        sumx2 += x[i] * x[i];
    }

    b = (n * sumxy - sumx * sumy) /
        (n * sumx2 - sumx * sumx);

    a = (sumy - b * sumx) / n;

    printf("\nBest Fit Line:\n");
    printf("y = %.4f + %.4fx\n", a, b);

    return 0;
}