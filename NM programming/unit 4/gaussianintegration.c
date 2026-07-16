#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x * x;
}

int main()
{
    float a, b;
    float x1, x2;
    float result;

    printf("Enter lower limit (a): ");
    scanf("%f", &a);

    printf("Enter upper limit (b): ");
    scanf("%f", &b);

    x1 = ((b - a) / 2.0) * (-1.0 / sqrt(3.0)) + ((a + b) / 2.0);
    x2 = ((b - a) / 2.0) * (1.0 / sqrt(3.0)) + ((a + b) / 2.0);

    result = ((b - a) / 2.0) * (f(x1) + f(x2));

    printf("\nApproximate Integral = %.6f\n", result);

    return 0;
}