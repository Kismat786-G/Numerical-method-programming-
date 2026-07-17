#include <stdio.h>

int main()
{
    int i, j;
    float grid[5][5];

    // Initialize grid with zero
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            grid[i][j] = 0;
        }
    }

    printf("5 x 5 Grid Initialized:\n\n");

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%.0f ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}