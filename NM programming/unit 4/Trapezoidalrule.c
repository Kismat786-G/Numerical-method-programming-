#include <stdio.h>
#include <math.h>

// Function definition
float f(float x)
{
    return x * x;
}

int main()
{
    float a, b, h, sum, integral, x;
    int n, i;

    printf("Enter lower limit (a): ");
    scanf("%f", &a);

    printf("Enter upper limit (b): ");
    scanf("%f", &b);

    printf("Enter number of subintervals: ");
    scanf("%d", &n);

    h = (b - a) / n;

    sum = f(a) + f(b);

    for(i = 1; i < n; i++)
    {
        x = a + i * h;
        sum = sum + 2 * f(x);
    }

    integral = (h / 2) * sum;

    printf("\nApproximate Integral = %.4f\n", integral);

    return 0;
}