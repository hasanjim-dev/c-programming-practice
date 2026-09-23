#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[50] = "Hasan";
    char lastName[50] = "Jim";
    char fullName[100];

    strcpy(fullName, firstName);

    strcat(fullName, " ");

    strcat(fullName, lastName);

    printf("Full Name: %s\n", fullName);

    printf("Length: %zu\n", strlen(fullName));

    printf("Comparison: %d\n", strcmp(firstName, lastName));

    return 0;
}