#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    int age;
};

int main() {
    int choice;
    struct Contact c;
    FILE *file;

    printf("1. Add Contact\n2. View Contacts\nChoose: ");
    scanf("%d", &choice);

    if (choice == 1) {
        file = fopen("contacts.txt", "a");
        printf("Enter name: ");
        scanf("%s", c.name);
        printf("Enter age: ");
        scanf("%d", &c.age);
        fprintf(file, "%s %d\n", c.name, c.age);
        fclose(file);
        printf("Contact added!\n");
    } 
    else if (choice == 2) {
        file = fopen("contacts.txt", "r");
        printf("Contacts:\n");
        while (fscanf(file, "%s %d", c.name, &c.age) != EOF) {
            printf("%s (%d)\n", c.name, c.age);
        }
        fclose(file);
    }
    return 0;
}