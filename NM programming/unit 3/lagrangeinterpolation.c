#include <stdio.h>

int main()
{
    int i, j, n;
    float x[20], y[20], xp;
    float yp = 0, p;

    printf("Enter number of data points: ");
    scanf("%d", &n);

    printf("Enter x and y values:\n");

    for(i = 0; i < n; i++)
        scanf("%f %f", &x[i], &y[i]);

    printf("Enter interpolation point: ");
    scanf("%f", &xp);

    for(i = 0; i < n; i++)
    {
        p = 1;

        for(j = 0; j < n; j++)
        {
            if(i != j)
                p = p * (xp - x[j]) / (x[i] - x[j]);
        }

        yp = yp + p * y[i];
    }

    printf("\nInterpolated Value = %.4f\n", yp);

    return 0;
}