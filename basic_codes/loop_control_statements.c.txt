#include <stdio.h>

int main()
{
    int i;

    printf("Break and Continue:\n");

    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }

        if (i == 9)
        {
            break;
        }

        printf("%d ", i);
    }

    printf("\n\nGoto:\n");

    i = 1;

start:

    printf("%d ", i);

    i++;

    if (i <= 5)
    {
        goto start;
    }

    return 0;
}