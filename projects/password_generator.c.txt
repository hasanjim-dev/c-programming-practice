#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char characters[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789";

    int length;
    int size;
    int i;

    size = sizeof(characters) - 1;

    printf("Enter password length: ");
    scanf("%d", &length);

    if (length <= 0 || length > 100)
    {
        printf("Invalid password length.\n");

        return 0;
    }

    srand(time(NULL));

    printf("Generated Password: ");

    for (i = 0; i < length; i++)
    {
        printf("%c", characters[rand() % size]);
    }

    printf("\n");

    return 0;
}