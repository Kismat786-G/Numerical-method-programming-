#include <stdio.h>

// Function representing dz/dx = x + y
float f(float x, float y, float z)
{
    return x + y;
}

int main()
{
    float x, y, z, h, xn;
    float y_new, z_new;

    printf("Enter initial value of x: ");
    scanf("%f", &x);

    printf("Enter initial value of y: ");
    scanf("%f", &y);

    printf("Enter initial value of y' (z): ");
    scanf("%f", &z);

    printf("Enter step size (h): ");
    scanf("%f", &h);

    printf("Enter final value of x: ");
    scanf("%f", &xn);

    while(x < xn)
    {
        y_new = y + h * z;

        z_new = z + h * f(x, y, z);

        y = y_new;
        z = z_new;

        x = x + h;
    }

    printf("\nApproximate value of y = %.4f\n", y);
    printf("Approximate value of y' = %.4f\n", z);

    return 0;
}