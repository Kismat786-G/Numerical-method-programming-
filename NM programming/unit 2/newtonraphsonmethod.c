#include <stdio.h>
#include <math.h>

// Function
float f(float x)
{
    return x*x*x - x - 2;
}

// Derivative
float df(float x)
{
    return 3*x*x - 1;
}

int main()
{
    float x0, x1, error;

    printf("Enter initial guess: ");
    scanf("%f", &x0);

    printf("Enter acceptable error: ");
    scanf("%f", &error);

    printf("\nIteration\t x0\t\t x1\n");

    int i = 1;

    do
    {
        x1 = x0 - (f(x0) / df(x0));

        printf("%d\t\t %.6f\t %.6f\n", i, x0, x1);

        x0 = x1;
        i++;

    } while(fabs(f(x1)) > error);

    printf("\nApproximate Root = %.6f\n", x1);

    return 0;
}