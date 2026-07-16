#include <stdio.h>

int main()
{
    float x0, y0, x1, y1, x, y;

    printf("Enter x0 and y0: ");
    scanf("%f %f", &x0, &y0);

    printf("Enter x1 and y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter value of x: ");
    scanf("%f", &x);

    y = y0 + ((x - x0) * (y1 - y0)) / (x1 - x0);

    printf("\nInterpolated Value = %.4f\n", y);

    return 0;
}