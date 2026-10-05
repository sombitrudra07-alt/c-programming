//write a c program to print tribonacci seres
#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 0, third = 1, next;
    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }
    printf("Tribonacci Series up to %d terms:\n", n);
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld ", first);
        } else if (i == 2) {
            printf("%lld ", second);
        } else if (i == 3) {
            printf("%lld ", third);
        } else {
            next = first + second + third;
            printf("%lld ", next);
            first = second;
            second = third;
            third = next;
        }
    }
    printf("\n");
    return 0;
}

