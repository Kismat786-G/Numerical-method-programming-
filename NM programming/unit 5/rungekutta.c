#include <stdio.h>

// Function representing dy/dx = x + y
float f(float x, float y)
{
    return x + y;
}

int main()
{
    float x, y, h, xn;
    float k1, k2, k3, k4;

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
        k1 = h * f(x, y);

        k2 = h * f(x + h/2, y + k1/2);

        k3 = h * f(x + h/2, y + k2/2);

        k4 = h * f(x + h, y + k3);

        y = y + (k1 + 2*k2 + 2*k3 + k4) / 6;

        x = x + h;
    }

    printf("\nApproximate value of y = %.4f\n", y);

    return 0;
}