#include <stdio.h>

int main()
{
    char answer;
    int score = 0;

    printf("1. Which language is used in this program?\n");
    printf("A. C\n");
    printf("B. Java\n");
    printf("C. Python\n");

    printf("Answer: ");
    scanf(" %c", &answer);

    if (answer == 'A' || answer == 'a')
    {
        score++;
    }

    printf("\n2. Which symbol is used to end a statement in C?\n");
    printf("A. :\n");
    printf("B. ;\n");
    printf("C. ,\n");

    printf("Answer: ");
    scanf(" %c", &answer);

    if (answer == 'B' || answer == 'b')
    {
        score++;
    }

    printf("\n3. Which function is used for output in C?\n");
    printf("A. scanf\n");
    printf("B. input\n");
    printf("C. printf\n");

    printf("Answer: ");
    scanf(" %c", &answer);

    if (answer == 'C' || answer == 'c')
    {
        score++;
    }

    printf("\nYour Score: %d/3\n", score);

    return 0;
}