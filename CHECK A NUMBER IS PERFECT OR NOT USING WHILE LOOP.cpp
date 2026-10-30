#include <stdio.h>

int main() {
    int num, i = 1, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &num);
    while (i <= num / 2) {
        if (num % i == 0) {
            sum += i;
        }
        i++;
    }
    if (sum == num && num > 0) {
        printf("%d is a PERFECT NUMBER.\n", num);
    } else {
        printf("%d is NOT a PERFECT NUMBER.\n", num);
    }
    return 0;
}

