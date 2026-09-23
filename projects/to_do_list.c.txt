#include <stdio.h>

int main()
{
    char tasks[100][100];
    int completed[100] = {0};

    int count = 0;
    int choice;
    int number;
    int i;

    while (1)
    {
        printf("\n1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Complete Task\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter task: ");
            scanf(" %99[^\n]", tasks[count]);

            count++;

            printf("Task added.\n");
        }
        else if (choice == 2)
        {
            printf("\nTo-Do List:\n");

            for (i = 0; i < count; i++)
            {
                if (completed[i])
                {
                    printf("%d. [Completed] %s\n",
                           i + 1,
                           tasks[i]);
                }
                else
                {
                    printf("%d. [Pending] %s\n",
                           i + 1,
                           tasks[i]);
                }
            }
        }
        else if (choice == 3)
        {
            printf("Enter task number: ");
            scanf("%d", &number);

            if (number >= 1 && number <= count)
            {
                completed[number - 1] = 1;

                printf("Task completed.\n");
            }
        }
        else if (choice == 4)
        {
            break;
        }
    }

    return 0;
}