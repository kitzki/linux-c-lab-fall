#include <stdio.h>

int add(int a, int b) { return a + b; }

int main(void) {
int num;
printf("Enter an integer: ");
if (scanf("%d", &num) != 1) return 1;
if (num > 0) printf("Positive\n"); else printf("Non-positive\n");

for (int i = 1; i <= 5; i++) {
printf("%d\n", i);
}

printf("add(3,4) = %d\n", add(3,4));