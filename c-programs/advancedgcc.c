#include <stdio.h>
#include <string.h>

int main() {
    // --- 1. Arrays and Pointers ---
    int arr[3] = {1, 2, 3};
    int *ptr = arr;
    for (int i = 0; i < 3; i++) {
        printf("%d\n", *(ptr + i));
    }

    // --- 3. Strings and Files ---
    FILE *file = fopen("output.txt", "w");
    if (file != NULL) {
        fprintf(file, "Text");
        fclose(file);
    } else {
        printf("Error opening file.\n");
    }

    // --- 4. Structures ---
    struct Person {
        char name[50];
        int age;
    };

    struct Person p;
    strcpy(p.name, "Alice");
    p.age = 25;

    printf("Name: %s, Age: %d\n", p.name, p.age);

    return 0;
}