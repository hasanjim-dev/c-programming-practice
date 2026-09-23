#include <stdio.h>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    int matrix[2][3] =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    int i;
    int j;

    printf("1D Array:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n\n2D Array:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}