#include <stdio.h>

int globalValue = 100;

void showValue()
{
    int localValue = 50;

    printf("Global Variable: %d\n", globalValue);
    printf("Local Variable: %d\n", localValue);
}

int main()
{
    showValue();

    printf("Global Variable in Main: %d\n", globalValue);

    return 0;
}