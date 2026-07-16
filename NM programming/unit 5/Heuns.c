#include <stdio.h>

// Function representing dy/dx = x + y
float f(float x, float y)
{
    return x + y;
}

int main()
{
    float x, y, h, xn;
    float yp, yc;

    printf("Enter initial value of x: ");
    scanf("%f", &x);

    printf("Enter initial value of y: ");
    scanf("%f", &y);

    printf("Enter step size (h): ");
    scanf("%f", &h);

    printf("Enter final value of x: ");
    scanf("%f", &xn);

    while(x < xn)
    {
        // Predictor
        yp = y + h * f(x, y);

        // Corrector
        yc = y + (h / 2) * (f(x, y) + f(x + h, yp));

        y = yc;
        x = x + h;
    }

    printf("\nApproximate value of y = %.4f\n", y);

    return 0;
}