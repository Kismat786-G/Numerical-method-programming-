#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x * x;
}

int main()
{
    float x, h, derivative;

    printf("Enter x: ");
    scanf("%f", &x);

    printf("Enter h: ");
    scanf("%f", &h);

    derivative = (f(x + h) - f(x)) / h;

    printf("\nForward Difference = %.4f\n", derivative);

    return 0;
}