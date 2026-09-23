#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    int *numbers = malloc(3 * sizeof(int));

    if (numbers == NULL)
    {
        return 1;
    }

    for (i = 0; i < 3; i++)
    {
        numbers[i] = (i + 1) * 10;
    }

    printf("Malloc:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d ", numbers[i]);
    }

    free(numbers);

    int *zeros = calloc(3, sizeof(int));

    if (zeros == NULL)
    {
        return 1;
    }

    printf("\n\nCalloc:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d ", zeros[i]);
    }

    zeros = realloc(zeros, 5 * sizeof(int));

    if (zeros == NULL)
    {
        return 1;
    }

    zeros[3] = 40;
    zeros[4] = 50;

    printf("\n\nRealloc:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", zeros[i]);
    }

    free(zeros);

    return 0;
}