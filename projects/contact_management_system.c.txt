#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[20];
};

int main()
{
    struct Contact contacts[100];

    int count = 0;
    int choice;
    int i;
    char searchName[50];

    while (1)
    {
        printf("\n1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter name: ");
            scanf("%49s", contacts[count].name);

            printf("Enter phone: ");
            scanf("%19s", contacts[count].phone);

            count++;

            printf("Contact added successfully.\n");
        }
        else if (choice == 2)
        {
            printf("\nContacts:\n");

            for (i = 0; i < count; i++)
            {
                printf("%d. %s - %s\n",
                       i + 1,
                       contacts[i].name,
                       contacts[i].phone);
            }
        }
        else if (choice == 3)
        {
            printf("Enter name to search: ");
            scanf("%49s", searchName);

            for (i = 0; i < count; i++)
            {
                if (strcmp(contacts[i].name, searchName) == 0)
                {
                    printf("Name: %s\n", contacts[i].name);
                    printf("Phone: %s\n", contacts[i].phone);
                    break;
                }
            }
        }
        else if (choice == 4)
        {
            break;
        }
    }

    return 0;
}