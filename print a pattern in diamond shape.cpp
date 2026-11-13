

#include <stdio.h>

int main() {
    int n = 4;
    int i, j;
    for (i = n; i >= 1; i--) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = n; j >= i; j--) {
            printf("%d", j);
        }
        for (j = i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    for (i = 2; i <= n; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = n; j >= i; j--) {
            printf("%d", j);
        }
        for (j = i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

