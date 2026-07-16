#include <stdio.h>
#include <math.h>

// g(x) = cube root of (x + 2)
float g(float x)
{
    return pow(x + 2, 1.0/3.0);
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
        x1 = g(x0);

        printf("%d\t\t %.6f\t %.6f\n", i, x0, x1);

        if(fabs(x1 - x0) < error)
            break;

        x0 = x1;
        i++;

    } while(1);

    printf("\nApproximate Root = %.6f\n", x1);

    return 0;
}