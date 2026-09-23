#include <stdio.h>

union Data
{
    int number;
    float decimal;
    char letter;
};

int main()
{
    union Data data;

    data.number = 100;

    printf("Integer: %d\n", data.number);

    data.decimal = 25.5;

    printf("Float: %.2f\n", data.decimal);

    data.letter = 'A';

    printf("Character: %c\n", data.letter);

    return 0;
}