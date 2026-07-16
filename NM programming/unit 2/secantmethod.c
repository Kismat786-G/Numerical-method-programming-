#include <stdio.h>
#include <math.h>

// Function definition
float f(float x)
{
    return x*x*x - x - 2;
}

int main()
{
    float x0, x1, x2;
    float error;

    printf("Enter first initial guess (x0): ");
    scanf("%f", &x0);

    printf("Enter second initial guess (x1): ");
    scanf("%f", &x1);

    printf("Enter acceptable error: ");
    scanf("%f", &error);

    printf("\nIteration\t x0\t\t x1\t\t x2\n");

    int i = 1;

    do
    {
        x2 = x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));

        printf("%d\t\t %.6f\t %.6f\t %.6f\n", i, x0, x1, x2);

        x0 = x1;
        x1 = x2;

        i++;

    } while(fabs(f(x2)) > error);

    printf("\nApproximate Root = %.6f\n", x2);

    return 0;
}