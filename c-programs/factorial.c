#include <stdio.h>

long long fact(int num) {
if (num < 0) return -1;  // error sentinel
if (num == 0) return 1;
return (long long)num * fact(num - 1);
}

int main(void) {
int num;
printf("Enter num: ");
if (scanf("%d", &num) != 1) return 1;
long long f = fact(num);
if (num < 0) { puts("Undefined for negatives"); return 1; }
printf("Factorial: %lld\n", f);
return 0;
}