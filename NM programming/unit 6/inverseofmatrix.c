#include <stdio.h>

int main()
{
    float a, b, c, d, det;

    printf("Enter elements of 2x2 matrix:\n");
    scanf("%f %f", &a, &b);
    scanf("%f %f", &c, &d);

    det = a * d - b * c;

    if(det == 0)
    {
        printf("\nInverse does not exist (Singular Matrix).\n");
    }
    else
    {
        printf("\nInverse Matrix:\n");

        printf("%.2f\t%.2f\n", d / det, -b / det);
        printf("%.2f\t%.2f\n", -c / det, a / det);
    }

    return 0;
}