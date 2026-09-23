#include <stdio.h>

int main()
{
    int number = 25;

    int *pointer = &number;

    printf("Value: %d\n", number);

    printf("Address: %p\n", (void *)pointer);

    printf("Value using Pointer: %d\n", *pointer);

    *pointer = 50;

    printf("Updated Value: %d\n", number);

    return 0;
}