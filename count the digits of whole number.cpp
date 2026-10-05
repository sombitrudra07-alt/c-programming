//w.a.c.p to count a digits of an whole number
#include <stdio.h>

int main() {
    long long num;
    int count = 0;
    printf("Enter a whole number: ");
    scanf("%lld", &num);
    if (num == 0) {
        count = 1;
    } else {
        if (num < 0) {
            num = -num;
        }
        while (num > 0) {
            num = num / 10; 
            count++;        
        }
    }
    printf("Total number of digits: %d\n", count);

    return 0;
}

