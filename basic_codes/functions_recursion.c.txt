#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int result;

    result = add(10, 20);

    printf("Sum: %d\n", result);

    printf("Factorial: %d\n", factorial(5));

    return 0;
}