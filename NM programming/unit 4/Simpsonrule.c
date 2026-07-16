#include <stdio.h>
#include <math.h>

// Function definition
float f(float x)
{
    return x * x;
}

int main()
{
    float a, b, h, sum = 0, integral, x;
    int n, i;

    printf("Enter lower limit (a): ");
    scanf("%f", &a);

    printf("Enter upper limit (b): ");
    scanf("%f", &b);

    printf("Enter number of subintervals (even): ");
    scanf("%d", &n);

    if(n % 2 != 0)
    {
        printf("Error! Number of subintervals must be even.\n");
        return 0;
    }

    h = (b - a) / n;

    sum = f(a) + f(b);

    for(i = 1; i < n; i++)
    {
        x = a + i * h;

        if(i % 2 == 0)
            sum += 2 * f(x);
        else
            sum += 4 * f(x);
    }

    integral = (h / 3) * sum;

    printf("\nApproximate Integral = %.4f\n", integral);

    return 0;
}
