#include <stdio.h>
#include <math.h>

int main()
{
    float trueValue, approxValue;
    float absoluteError, relativeError, percentageError;

    printf("Enter True Value: ");
    scanf("%f", &trueValue);

    printf("Enter Approximate Value: ");
    scanf("%f", &approxValue);

    absoluteError = fabs(trueValue - approxValue);

    relativeError = absoluteError / fabs(trueValue);

    percentageError = relativeError * 100;

    printf("\nAbsolute Error = %f", absoluteError);
    printf("\nRelative Error = %f", relativeError);
    printf("\nPercentage Error = %f%%", percentageError);

    return 0;
}