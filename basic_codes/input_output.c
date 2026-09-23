#include <stdio.h>

int main()
{
    int age;
    float marks;
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);

    return 0;
}