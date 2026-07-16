#include <stdio.h>
#include <math.h>

// Function definition
float f(float x)
{
    return x*x*x - x - 2;
}

int main()
{
    float a, b, c;
    float error;

    printf("Enter lower limit (a): ");
    scanf("%f", &a);

    printf("Enter upper limit (b): ");
    scanf("%f", &b);

    printf("Enter acceptable error: ");
    scanf("%f", &error);

    if(f(a) * f(b) >= 0)
    {
        printf("\nInvalid interval!\n");
        return 0;
    }

    printf("\nIteration\t a\t\t b\t\t c\n");

    int i = 1;

    do
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        printf("%d\t\t %.5f\t %.5f\t %.5f\n", i, a, b, c);

        if(f(c) == 0)
            break;

        if(f(a) * f(c) < 0)
            b = c;
        else
            a = c;

        i++;

    } while(fabs(f(c)) > error);

    printf("\nApproximate Root = %.6f\n", c);

    return 0;
}