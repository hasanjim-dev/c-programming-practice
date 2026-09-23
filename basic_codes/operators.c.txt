#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;

    printf("Arithmetic Operators\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    printf("\nRelational Operators\n");
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    printf("\nLogical Operators\n");
    printf("(a > 5 && b < 5): %d\n", a > 5 && b < 5);
    printf("(a > 5 || b > 5): %d\n", a > 5 || b > 5);
    printf("!(a == b): %d\n", !(a == b));

    printf("\nAssignment Operators\n");
    a += 5;
    printf("a += 5: %d\n", a);

    a -= 2;
    printf("a -= 2: %d\n", a);

    printf("\nBitwise Operators\n");
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);

    printf("\nTernary Operator\n");
    printf("%s\n", a > b ? "a is greater" : "b is greater");

    return 0;
}