#include <stdio.h>

int main()
{
    double number1;
    double number2;
    double result;

    char operator;

    printf("Enter first number: ");
    scanf("%lf", &number1);

    printf("Enter operator: ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &number2);

    switch (operator)
    {
        case '+':
            result = number1 + number2;
            printf("Result: %.2lf\n", result);
            break;

        case '-':
            result = number1 - number2;
            printf("Result: %.2lf\n", result);
            break;

        case '*':
            result = number1 * number2;
            printf("Result: %.2lf\n", result);
            break;

        case '/':
            if (number2 == 0)
            {
                printf("Cannot divide by zero.\n");
            }
            else
            {
                result = number1 / number2;
                printf("Result: %.2lf\n", result);
            }
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}