#include <stdio.h>

// Function representing dy/dx = x + y
float f(float x, float y)
{
    return x + y;
}

int main()
{
    float x0, y0, h, xn;
    float y;

    printf("Enter initial value of x: ");
    scanf("%f", &x0);

    printf("Enter initial value of y: ");
    scanf("%f", &y0);

    printf("Enter step size (h): ");
    scanf("%f", &h);

    printf("Enter final value of x: ");
    scanf("%f", &xn);

    y = y0;

    while(x0 < xn)
    {
        y = y + h * f(x0, y);
        x0 = x0 + h;
    }

    printf("\nApproximate value of y = %.4f\n", y);

    return 0;
}