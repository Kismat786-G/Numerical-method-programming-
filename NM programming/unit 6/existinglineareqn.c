#include <stdio.h>

int main()
{
    int rankA, rankAug, n;

    printf("Enter number of variables: ");
    scanf("%d", &n);

    printf("Enter Rank of Coefficient Matrix A: ");
    scanf("%d", &rankA);

    printf("Enter Rank of Augmented Matrix [A|B]: ");
    scanf("%d", &rankAug);

    if(rankA == rankAug)
    {
        if(rankA == n)
            printf("\nUnique Solution Exists.\n");
        else
            printf("\nInfinitely Many Solutions Exist.\n");
    }
    else
    {
        printf("\nNo Solution Exists.\n");
    }

    return 0;
}