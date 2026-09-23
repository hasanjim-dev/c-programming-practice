#include <stdio.h>

int main()
{
    int age = 20;
    float marks = 85.5;
    const float PI = 3.14159;

    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);
    printf("PI: %.5f\n", PI);

    age = 21;

    printf("Updated Age: %d\n", age);

    return 0;
}