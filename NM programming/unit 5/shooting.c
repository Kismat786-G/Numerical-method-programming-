#include <stdio.h>

// Function representing d2y/dx2 = -y
float f(float x, float y, float z)
{
    return -y;
}

int main()
{
    float x, y, z;
    float h, xn;

    printf("Enter initial value of x: ");
    scanf("%f", &x);

    printf("Enter initial value of y: ");
    scanf("%f", &y);

    printf("Enter guessed value of y' (z): ");
    scanf("%f", &z);

    printf("Enter step size (h): ");
    scanf("%f", &h);

    printf("Enter final value of x: ");
    scanf("%f", &xn);

    while(x < xn)
    {
        float y_new = y + h * z;
        float z_new = z + h * f(x, y, z);

        y = y_new;
        z = z_new;
        x = x + h;
    }

    printf("\nApproximate value of y at x = %.2f is %.4f\n", xn, y);

    return 0;
}