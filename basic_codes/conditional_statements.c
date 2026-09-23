#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("Positive number\n");
    }
    else if (number < 0)
    {
        printf("Negative number\n");
    }
    else
    {
        printf("Zero\n");
    }

    switch (number)
    {
        case 1:
            printf("One\n");
            break;

        case 2:
            printf("Two\n");
            break;

        default:
            printf("Other number\n");
    }

    return 0;
}