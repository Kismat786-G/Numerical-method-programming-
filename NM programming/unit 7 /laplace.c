#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, iter;
    float u[5][5] = {
        {100,100,100,100,100},
        {75,0,0,0,50},
        {75,0,0,0,50},
        {75,0,0,0,50},
        {0,0,0,0,0}
    };

    printf("Enter number of iterations: ");
    scanf("%d",&iter);

    while(iter--)
    {
        for(i=1;i<4;i++)
        {
            for(j=1;j<4;j++)
            {
                u[i][j]=(u[i+1][j]+u[i-1][j]+u[i][j+1]+u[i][j-1])/4.0;
            }
        }
    }

    printf("\nApproximate Solution:\n\n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%8.2f",u[i][j]);
        }
        printf("\n");
    }

    return 0;
}