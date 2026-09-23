#include <stdio.h>

int main()
{
    int i;
    int j;

    printf("For Loop:\n");

    for (i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }

    printf("\n\nWhile Loop:\n");

    i = 1;

    while (i <= 5)
    {
        printf("%d ", i);
        i++;
    }

    printf("\n\nDo While Loop:\n");

    i = 1;

    do
    {
        printf("%d ", i);
        i++;
    }
    while (i <= 5);

    printf("\n\nNested Loop:\n");

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}