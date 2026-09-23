#include <stdio.h>

int main()
{
    FILE *file;

    char text[100];

    file = fopen("sample.txt", "w");

    if (file == NULL)
    {
        return 1;
    }

    fprintf(file, "This is a C file handling example.");

    fclose(file);

    file = fopen("sample.txt", "r");

    if (file == NULL)
    {
        return 1;
    }

    fgets(text, sizeof(text), file);

    printf("File Content:\n");
    printf("%s\n", text);

    fclose(file);

    return 0;
}